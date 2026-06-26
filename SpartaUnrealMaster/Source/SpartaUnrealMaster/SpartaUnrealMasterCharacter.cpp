// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpartaUnrealMasterCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "WeaponBase.h"
#include "WeaponTemplateBase.h"

#include "Engine/DamageEvents.h"
#include "FireDamageType.h"

#include "Blueprint/UserWidget.h"

#include "11week/GAs_AttributeSet.h"	

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ASpartaUnrealMasterCharacter

ASpartaUnrealMasterCharacter::ASpartaUnrealMasterCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)


	AttributeSet = CreateDefaultSubobject<UGAs_AttributeSet>(TEXT("GASAttributeSetBase"));
}

void ASpartaUnrealMasterCharacter::ApplyDamage(float DamageAmount)
{
	float NewHp = AttributeSet->GetHp() - DamageAmount;
	AttributeSet->SetHp(NewHp);
}

//////////////////////////////////////////////////////////////////////////
// Input

void ASpartaUnrealMasterCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ASpartaUnrealMasterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASpartaUnrealMasterCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ASpartaUnrealMasterCharacter::Look);

		// Fire
		if (FireAction)
		{
			EnhancedInputComponent->BindAction(FireAction, ETriggerEvent::Started, this, &ASpartaUnrealMasterCharacter::Fire);
		}

		// Aiming
		if (AimingAction)
			{
				EnhancedInputComponent->BindAction(AimingAction, ETriggerEvent::Started, this, &ASpartaUnrealMasterCharacter::StartAiming);

			EnhancedInputComponent->BindAction(AimingAction, ETriggerEvent::Completed, this, &ASpartaUnrealMasterCharacter::StopAiming);

			EnhancedInputComponent->BindAction(AimingAction, ETriggerEvent::Canceled, this, &ASpartaUnrealMasterCharacter::StopAiming);
		}

		// Reloading
		EnhancedInputComponent->BindAction(ReloadingAction, ETriggerEvent::Started, this, &ASpartaUnrealMasterCharacter::Reload);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ASpartaUnrealMasterCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (WeaponClass)
	{
		CurrentWeapon = GetWorld()->SpawnActor<AWeaponBase>(WeaponClass);

		if (CurrentWeapon)
		{
			CurrentWeapon->SetOwner(this);

			CurrentWeapon->AttachToComponent(
				GetMesh(),
				FAttachmentTransformRules::SnapToTargetNotIncludingScale,
				TEXT("WeaponSocket")
			);
		}
	}
}

void ASpartaUnrealMasterCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	
		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// add movement 
		AddMovementInput(ForwardDirection, MovementVector.Y);
		AddMovementInput(RightDirection, MovementVector.X);
	}
}

void ASpartaUnrealMasterCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

float ASpartaUnrealMasterCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// 1. 부모 클래스의 기본 데미지 처리 호출
	float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// 2. DamageTypeClass가 유효한지 먼저 확인 (Null Check)
	if (DamageEvent.DamageTypeClass != nullptr)
	{
		// 3. 해당 클래스가 UFireDamageType이거나 그 자식 클래스인지 안전하게 확인 후 가져옴
		// Cast를 사용하거나 CDO를 안전하게 검사합니다.
		const UFireDamageType* FireDamage = Cast<UFireDamageType>(DamageEvent.DamageTypeClass->GetDefaultObject());

		if (FireDamage)
		{
			// 화상 데미지(UFireDamageType)인 경우에만 방어 관통 로직 적용
			ActualDamage *= (1.f + FireDamage->ArmorPenetration);

			UE_LOG(LogTemp, Warning, TEXT("Fire Damage Received! Applied Damage: %f"), ActualDamage);
			// 여기에 화상 이펙트나 사운드 로직을 추가하세요.
		}
		else
		{
			// 화상 데미지가 아닌 일반 데미지인 경우
			UE_LOG(LogTemp, Log, TEXT("Normal Damage Received: %f"), ActualDamage);
		}
	}
	else
	{
		// DamageTypeClass가 없는 경우 (매우 드물지만 방어적 프로그래밍)
		UE_LOG(LogTemp, Warning, TEXT("Damage received without a valid DamageTypeClass."));
	}

	// 4. 최종적으로 계산된 ActualDamage를 HP 변수에 반영 (예시)
	// Health -= ActualDamage;

	if (EventInstigator)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attacked by someone!"));
	}

	return ActualDamage;
}

void ASpartaUnrealMasterCharacter::Fire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->Fire();
	}
}

void ASpartaUnrealMasterCharacter::StartAiming()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->SetAiming(true);
	}
}

void ASpartaUnrealMasterCharacter::StopAiming()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->SetAiming(false);
	}
}

void ASpartaUnrealMasterCharacter::Reload()
{
	if (CurrentWeapon)
	{
		if (AWeaponTemplateBase* TemplateWeapon = Cast<AWeaponTemplateBase>(CurrentWeapon))
		{
			TemplateWeapon->Reload();
		}
	}
}