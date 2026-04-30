#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Shotgun.generated.h"

UCLASS()
class SPARTAUNREALMASTER_API AShotgun : public AWeaponBase
{
    GENERATED_BODY()

public:
    virtual void Fire() override;
};