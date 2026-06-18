// GAS_CharacterBase.cpp


#include "10week/GAS_CharacterBase.h"

#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AGAS_CharacterBase::AGAS_CharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//수업 때 만든 내용들, 지금은 ASpartaUnrealMasterCharacter를 상속받기 때문에 필요 없음.
	//GetCapsuleComponent()->InitCapsuleSize(35.f, 90.f);
	//bUseControllerRotationPitch = false;
	//bUseControllerRotationYaw = false;
	//bUseControllerRotationRoll = false;

	//GetCharacterMovement()->bOrientRotationToMovement = true;
	//GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);
	//GetCharacterMovement()->JumpZVelocity = 500.f;
	//GetCharacterMovement()->AirControl = 0.35f;
	//GetCharacterMovement()->MaxWalkSpeed = 500.f;
	//GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	//GetCharacterMovement()->BrakingDecelerationFalling = 1500.f;

	ASC = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

// Called when the game starts or when spawned
void AGAS_CharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGAS_CharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGAS_CharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//어디서든 쓰기 위해서 어빌리티 시스템이 자신이 누군지 알고 있음.
UAbilitySystemComponent* AGAS_CharacterBase::GetAbilitySystemComponent() const
{
	return ASC;;
}

void AGAS_CharacterBase::PossessedBy(AController* NewConroller)
{
	Super::PossessedBy(NewConroller);

	if (ASC)
	{
		ASC->InitAbilityActorInfo(this, this);
	}
}
