#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponDefinition.h"
#include "WeaponRangedDefinition.generated.h"

class UItemDefinition;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponRangedDefinition : public UWeaponDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ArrowGravityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ProjectileSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ProjectileSpeedMax;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemDefinition> m_RangedDefinition;
    
    UWeaponRangedDefinition();

};

