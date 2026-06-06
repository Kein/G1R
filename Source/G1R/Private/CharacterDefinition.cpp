#include "CharacterDefinition.h"
#include "CharacterBloodSettings.h"
#include "Templates/SubclassOf.h"

UCharacterDefinition::UCharacterDefinition() {
    this->m_AbilitiesEffect = NULL;
    this->m_OnPlayerEffect = NULL;
    this->m_InitialGuildEffect = NULL;
    this->m_CameraConfig = NULL;
    this->m_AIAbility = NULL;
    this->m_CharacterVisualsDefinition = NULL;
    this->m_PerceptionSettings = NULL;
    this->m_Blood = UCharacterBloodSettings::StaticClass();
    this->m_Personality = NULL;
    this->m_LightType = 0;
    this->m_InventoryPreset = NULL;
    this->m_CharacterPreset = NULL;
    this->m_HealthBarAttachToSocket = TEXT("headSocket");
    this->m_OnParriedDamageMultiplier = 1.00f;
    this->m_CanAttack = true;
    this->bHideHealthBar = false;
    this->bPersistent = true;
}

void UCharacterDefinition::SetAttributeValueForTag(const FString& attributePath, float Value, FGameplayTag GameplayTag, TSubclassOf<UDifficultySettings> difficulty) {
}

void UCharacterDefinition::SetAttributeValue(const FString& attributePath, float Value, TSubclassOf<UDifficultySettings> difficulty) {
}

bool UCharacterDefinition::IsPersistent() const {
    return false;
}

UCueVisualConfig* UCharacterDefinition::GetVisualEffectConfig(FGameplayTag DebuffEffectTag) const {
    return NULL;
}

TMap<FString, float> UCharacterDefinition::GetInitialValues() const {
    return TMap<FString, float>();
}

TArray<TSubclassOf<UAttributeSet>> UCharacterDefinition::GetInitialAttributes() const {
    return TArray<TSubclassOf<UAttributeSet>>();
}

FName UCharacterDefinition::GetHealthBarAttachToSocket() const {
    return NAME_None;
}


