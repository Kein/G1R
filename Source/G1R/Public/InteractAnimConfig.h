#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "GothicBaseConfig.h"
#include "SkillAnimMontage.h"
#include "InteractAnimConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UInteractAnimConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> m_IdleBreakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> m_ExtraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> m_Sections;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_ObjectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, TSoftObjectPtr<UAnimMontage>> m_MontagesMap;
    
    UPROPERTY()
    TMap<FGameplayTag, FSkillAnimMontage> m_ItemsAnimData;
    
public:
    UInteractAnimConfig();

    UFUNCTION(BlueprintPure)
    UAnimMontage* GetItemMontage(const FGameplayTag& ItemType, EWeaponSkill ItemSkill) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInteractObjectMontage() const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInteractMontageMap(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetInteractMontage() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill, TSoftObjectPtr<UAnimMontage> AnimMontage);
    
};

