#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponDefinition.h"
#include "WeaponMeleeDefinition.generated.h"

class UFeedbackData;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponMeleeDefinition : public UWeaponDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UFeedbackData> m_FeedbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DamageReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartRegenerateSc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HpRegenerateTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BlockSuperArmorMultiplier;
    
public:
    UWeaponMeleeDefinition();

    UFUNCTION(BlueprintPure)
    float GetStartRegenerateSc() const;
    
    UFUNCTION(BlueprintPure)
    float GetHpRegenerateTick() const;
    
    UFUNCTION(BlueprintPure)
    UFeedbackData* GetFeedbackControl() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamageReduction() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlockSuperArmorMultiplier() const;
    
};

