#include "CharacterVisualsComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UCharacterVisualsComponent::UCharacterVisualsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReplicatedItemDef = NULL;
    this->m_EquipArmorGameplayEffect = NULL;
    this->m_LoadedCustomizableObject = NULL;
    this->m_CSkeletalComponent = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_CustomizableObjectInstance = NULL;
    this->m_IsPlayer = false;
    this->m_charDef = NULL;
    this->m_currentVisualsDefinition = NULL;
    this->VisualFeaturesDefinition = NULL;
    this->m_MagicIndex = 0;
    this->m_ProgressSteps = 0;
}

void UCharacterVisualsComponent::StaticCustomizableObjectInit(AActor* Owner, UCustomizableObjectInstance* CustomizableObjectInstance, const UCharacterDefinition* CharacterDefinition, UArmorVisualsDefinition* amorVisualDefinition) {
}

void UCharacterVisualsComponent::SetRedEyes() const {
}

void UCharacterVisualsComponent::SetPropertyFromCharactersName(const UCharacterDefinition* charDef, TMap<FString, FString>& CurrentEnumProperties) {
}

void UCharacterVisualsComponent::SetPropertiesIntoCustomizableObject(UCustomizableObjectInstance* CustomizableObjectInstance, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties) {
}

void UCharacterVisualsComponent::SetPreviewArmor(TSubclassOf<UItemDefinition> itemDef) {
}

void UCharacterVisualsComponent::SetNewArmor(TSubclassOf<UItemDefinition> itemDef, bool IsPreview) {
}

void UCharacterVisualsComponent::SetCurrentStep(int32 Index) {
}

void UCharacterVisualsComponent::ServerNotifyArmorChanged_Implementation(TSubclassOf<UItemDefinition> itemDef) {
}

void UCharacterVisualsComponent::PrepareDataFromVisualDefinition(const UArmorVisualsDefinition* m_CharacterVisualsDefinition) {
}

void UCharacterVisualsComponent::PreloadGTO() {
}

void UCharacterVisualsComponent::PreloadCustomizableObject() {
}

void UCharacterVisualsComponent::OnWaterStateChange(FGameplayTag InTag, int32 NewCount) const {
}

void UCharacterVisualsComponent::OnRep_ItemDef() {
}

void UCharacterVisualsComponent::OnPrebakedSKLoaded() {
}

void UCharacterVisualsComponent::OnGTOLoaded() {
}

void UCharacterVisualsComponent::OnCustomMeshUpdated() {
}

void UCharacterVisualsComponent::OnCustomizableObjectLoaded() {
}

bool UCharacterVisualsComponent::IsCurrentStepCompletedAt(int32 Index) {
    return false;
}

FString UCharacterVisualsComponent::GetDefinitionPrebakedSKNameIfUsed(const TSubclassOf<UArmorVisualsDefinition> ArmorVisualDef) {
    return TEXT("");
}

void UCharacterVisualsComponent::GetArmorUpgradesClassName(AActor* Owner, UArmorDefinition* ArmorDef, FString& UpperArmorUpgradeClass, FString& MidArmorUpgradeClass, FString& LowerArmorUpgradeClass) {
}

void UCharacterVisualsComponent::FillPropertiesFromNewArmor(AActor* Owner, TSubclassOf<UItemDefinition> itemDef, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties) {
}

void UCharacterVisualsComponent::ClearProperties(TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties) {
}

void UCharacterVisualsComponent::AddPropertiesFromDefinition(const UArmorVisualsDefinition* ArmorVisualDef, TMap<FString, float>& CurrentFloatProperties, TMap<FString, bool>& CurrentBoolProperties, TMap<FString, FString>& CurrentEnumProperties, TMap<FString, FLinearColor>& CurrentVectorProperties) {
}

void UCharacterVisualsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCharacterVisualsComponent, ReplicatedItemDef);
}


