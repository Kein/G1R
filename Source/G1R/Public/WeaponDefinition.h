#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HitCueData.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "WeaponDefinition.generated.h"

class UGameplayEffect;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> m_DamageBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorDamageBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_HitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_CriticalWeakSpotsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CriticalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_DeathEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FHitCueData> m_HitCueDataByDamageType;
    
public:
    UWeaponDefinition();

    UFUNCTION(BlueprintPure)
    float GetSuperArmorDamage() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayEffect* GetHitEffect() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetHitCueDataByDamageTypeAndSpecie(FGameplayTag DamageTypeTag, FGameplayTag SpecieTypeTag);
    
    UFUNCTION(BlueprintPure)
    UGameplayEffect* GetDeathEffect() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FGameplayTag> GetDamageTypes() const;
    
    UFUNCTION(BlueprintPure)
    float GetDamage(const FGameplayTag& DamageType) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetCriticalWeakSpotsTags() const;
    
    UFUNCTION(BlueprintPure)
    float GetCriticalMultiplier() const;
    
    UFUNCTION()
    TMap<FGameplayTag, float> GetAllDamages() const;
    
    UFUNCTION(BlueprintCallable)
    void AddHitCueDataForSpecie(FGameplayTag DamageTypeTag, FGameplayTag SpecieTypeTag, FGameplayTag HitCueTag);
    
};

