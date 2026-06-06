#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DataConfigPreloadable.h"
#include "AttackConfig.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UAttackConfig : public UDataAsset, public IDataConfigPreloadable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_CanKnockback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> m_DamageMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorResistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_AttackDirection;
    
public:
    UAttackConfig();

    UFUNCTION(BlueprintPure)
    float GetSuperArmorResistanceMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    float GetSuperArmorDamageMultiplier() const;
    
    UFUNCTION(BlueprintPure)
    TMap<FGameplayTag, float> GetDamageMultipliers() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetAttackDirection() const;
    
    UFUNCTION(BlueprintPure)
    bool CanKnockback() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeParried() const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeDeflected() const;
    

    // Fix for true pure virtual functions not being implemented
};

