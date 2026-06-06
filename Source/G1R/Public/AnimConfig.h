#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "EWeaponSkill.h"
#include "GothicBaseConfig.h"
#include "SkillAnimConfig.h"
#include "Templates/SubclassOf.h"
#include "AnimConfig.generated.h"

class UAnimMontage;
class UIKConfig;
class UInteractAnimConfig;
class UItemAnimConfig;
class ULocoBlendCurvesConfig;
class UPhysicalBonesConfig;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class G1R_API UAnimConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float m_TimeToBeTired;
    
    UPROPERTY()
    float m_MinTimeTired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_TransitionNL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_TransitionNR;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ULocoBlendCurvesConfig> m_LocoBlendCurvesConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UIKConfig> m_IKConfig;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPhysicalBonesConfig> m_PhysicalBonesConfig;
    
    UPROPERTY()
    TMap<FGameplayTag, FSkillAnimConfig> m_ItemsAnimData;
    
    UPROPERTY()
    TMap<FGameplayTag, TSubclassOf<UInteractAnimConfig>> m_ActionAnimData;
    
    UPROPERTY()
    TMap<TEnumAsByte<EMovementMode>, TSubclassOf<UItemAnimConfig>> m_DefaultMovementAnimData;
    
public:
    UAnimConfig();

    UFUNCTION(BlueprintCallable)
    void SetDefaultMovementAnimData(TSubclassOf<UItemAnimConfig> ItemAnimConfig, TEnumAsByte<EMovementMode> MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimForItem(const FGameplayTag& ItemTag, TSubclassOf<UItemAnimConfig> ItemAnimConfig, EWeaponSkill ItemSkill);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimForAction(const FGameplayTag& ActionTag, TSubclassOf<UInteractAnimConfig> ActionAnimConfig);
    
};

