#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HitSpaceParams.h"
#include "InitialAttributeValues.h"
#include "InventoryDefinition.h"
#include "PickpocketTargetCharacterModifierSettings.h"
#include "SuperArmorParams.h"
#include "Templates/SubclassOf.h"
#include "VoiceTypeSubset.h"
#include "CharacterDefinition.generated.h"

class APouchActor;
class UArmorVisualsDefinition;
class UAttributeSet;
class UCameraDefinition;
class UCharacterBloodSettings;
class UCueVisualConfig;
class UDifficultySettings;
class UGameplayAbility_CharacterAI;
class UGameplayEffect;
class UGameplayEffect_Guild;
class UGothicCharacterPersonality;
class UInventoryPreset;
class UItemRecipeDefinition;
class UPerceptionAgentSettings;
class UPlayerPreset;
class UScriptGameplayEffect;

UCLASS(Abstract, EditInlineNew)
class G1R_API UCharacterDefinition : public UInventoryDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, TSubclassOf<UCueVisualConfig>> m_CueData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> m_AbilitiesEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect> m_OnPlayerEffect;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGameplayEffect_Guild> m_InitialGuildEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UItemRecipeDefinition>> m_KnownRecipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraDefinition> m_CameraConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UScriptGameplayEffect>> m_Skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayAbility_CharacterAI> m_AIAbility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UArmorVisualsDefinition> m_CharacterVisualsDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<APouchActor> m_PouchActorClass;
    
    UPROPERTY(EditAnywhere)
    FPickpocketTargetCharacterModifierSettings m_PickpocketTargetCharacterModifierSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVoiceTypeSubset> m_VoiceLinesOf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UPerceptionAgentSettings> m_PerceptionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_Species;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_Mood;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCharacterBloodSettings> m_Blood;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGothicCharacterPersonality> m_Personality;
    
protected:
    UPROPERTY()
    FGameplayTag m_CharacterType;
    
    UPROPERTY()
    int32 m_LightType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UInventoryPreset> m_InventoryPreset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPlayerPreset> m_CharacterPreset;
    
    UPROPERTY()
    FName m_HealthBarAttachToSocket;
    
    UPROPERTY()
    FGameplayTag m_CharacterSizeGroup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UAttributeSet>> m_InitialAttributes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FString, float> m_InitialValues;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FGameplayTag, FInitialAttributeValues> m_InitialValuesForTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSubclassOf<UDifficultySettings>, FInitialAttributeValues> m_InitialValuesForDifficulties;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSuperArmorParams m_SuperArmorParams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_OnParriedDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FHitSpaceParams m_HitSpaceParams;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_CanAttack;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bHideHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bPersistent;
    
public:
    UCharacterDefinition();

protected:
    UFUNCTION(BlueprintCallable)
    void SetAttributeValueForTag(const FString& attributePath, float Value, FGameplayTag GameplayTag, TSubclassOf<UDifficultySettings> difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetAttributeValue(const FString& attributePath, float Value, TSubclassOf<UDifficultySettings> difficulty);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPersistent() const;
    
    UFUNCTION(BlueprintPure)
    UCueVisualConfig* GetVisualEffectConfig(FGameplayTag DebuffEffectTag) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FString, float> GetInitialValues() const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSubclassOf<UAttributeSet>> GetInitialAttributes() const;
    
    UFUNCTION(BlueprintPure)
    FName GetHealthBarAttachToSocket() const;
    
};

