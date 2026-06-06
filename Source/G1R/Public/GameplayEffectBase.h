#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectBase.generated.h"

class UAdditionalEffectsGameplayEffectComponent;
class UAssetTagsGameplayEffectComponent;
class UBlockAbilityTagsGameplayEffectComponent;
class UGothicAbilitiesGameplayEffectComponent;
class URemoveOtherGameplayEffectComponent;
class UTargetTagRequirementsGameplayEffectComponent;
class UTargetTagsGameplayEffectComponent;

UCLASS(Abstract)
class G1R_API UGameplayEffectBase : public UGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UTargetTagsGameplayEffectComponent* TargetTagsComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UBlockAbilityTagsGameplayEffectComponent* BlockAbilityTagsComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAssetTagsGameplayEffectComponent* AssetTagsComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UTargetTagRequirementsGameplayEffectComponent* TargetTagRequirements;
    
    UPROPERTY(EditAnywhere, Instanced)
    URemoveOtherGameplayEffectComponent* RemoveOther;
    
    UPROPERTY(EditAnywhere, Instanced)
    UAdditionalEffectsGameplayEffectComponent* AdditionalEffects;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGothicAbilitiesGameplayEffectComponent* AbilitiesComponent;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer TagsToRemoveOther;
    
    UGameplayEffectBase();

    UFUNCTION(BlueprintCallable)
    void BP_RemoveOtherTags();
};

