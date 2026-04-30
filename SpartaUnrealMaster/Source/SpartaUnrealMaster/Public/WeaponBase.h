#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WeaponBase.generated.h"

USTRUCT(BlueprintType)
struct FWeaponData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float Damage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    int32 PelletCount;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float SpreadAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float Range;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float RecoilPitch;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    float RecoilYaw;
};

UCLASS()
class SPARTAUNREALMASTER_API AWeaponBase : public AActor
{
    GENERATED_BODY()

public:
    AWeaponBase();

    virtual void Fire();

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
    FWeaponData WeaponData;

    void ApplyRecoil();
};