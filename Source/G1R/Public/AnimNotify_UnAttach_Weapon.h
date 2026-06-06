#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "EWeaponType.h"
#include "AnimNotify_UnAttach_Weapon.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_UnAttach_Weapon : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EWeaponType m_InvType;
    
public:
    UAnimNotify_UnAttach_Weapon();

};

