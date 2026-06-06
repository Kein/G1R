#include "ItemDefinition.h"
#include "CharacterTargetConfig.h"
#include "Templates/SubclassOf.h"

UItemDefinition::UItemDefinition() {
    this->m_Value = 0;
    this->m_MaxStack = 1;
    this->m_Buoyancy = 1.50f;
    this->m_Weight = 0.00f;
    this->m_Mass = 1.00f;
    this->m_OnEquipEffect = NULL;
    this->m_ForcedInteraction = NULL;
    this->m_TryToStoreFirst = EInventoryTypes::None;
    this->m_HoldsterLocation = EHoldsterLocation::None;
    this->m_RequiredToPick = NULL;
    this->m_ReplaceBy = NULL;
    this->m_AutoTarget = false;
    this->m_TargetConfigClass = UCharacterTargetConfig::StaticClass();
}

void UItemDefinition::SetItemType(FGameplayTag GameplayTag) {
}

void UItemDefinition::RemoveItemSpec(FGameplayTag itemSpec) {
}

bool UItemDefinition::MatchesItemTypeExactly(const FGameplayTag& ItemType) const {
    return false;
}

bool UItemDefinition::MatchesItemType(const FGameplayTag& ItemType) const {
    return false;
}

TSubclassOf<AItemVisualWorld> UItemDefinition::LoadAndGetVisualWorldClass() const {
    return NULL;
}

TSubclassOf<AItemVisual> UItemDefinition::LoadAndGetVisualClass() const {
    return NULL;
}

AItemVisual* UItemDefinition::LoadAndGetVisual() const {
    return NULL;
}

TSubclassOf<AItemVisualWorld> UItemDefinition::LoadAndGetThrowVisualWorldClass() const {
    return NULL;
}

TSubclassOf<AActor> UItemDefinition::LoadAndGetEmptyVisualClass() const {
    return NULL;
}

AActor* UItemDefinition::LoadAndGetEmptyVisual() const {
    return NULL;
}

bool UItemDefinition::HasItemSpecExactly(const FGameplayTag& SpecTag) const {
    return false;
}

bool UItemDefinition::HasItemSpec(const FGameplayTag& SpecTag) const {
    return false;
}

bool UItemDefinition::HasAnyItemSpecsExactly(const FGameplayTagContainer& specTags) const {
    return false;
}

bool UItemDefinition::HasAnyItemSpecs(const FGameplayTagContainer& specTags) const {
    return false;
}

bool UItemDefinition::HasAllItemSpecsExactly(const FGameplayTagContainer& specTags) const {
    return false;
}

bool UItemDefinition::HasAllItemSpecs(const FGameplayTagContainer& specTags) const {
    return false;
}

TSubclassOf<UTargetConfigBase> UItemDefinition::GetTargetConfigClass() const {
    return NULL;
}

FText UItemDefinition::GetItemTypeDisplayText() const {
    return FText::GetEmpty();
}

FGameplayTag UItemDefinition::GetItemType() const {
    return FGameplayTag{};
}

FGameplayTag UItemDefinition::GetItemSpec(const FGameplayTag& SpecTag) const {
    return FGameplayTag{};
}

TMap<FGameplayAttribute, float> UItemDefinition::GetAttributeListFromGEList(const UAbilitySystemComponent* abComp, TArray<TSubclassOf<UScriptGameplayEffect>> GEList) {
    return TMap<FGameplayAttribute, float>();
}

FGameplayAttribute UItemDefinition::GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName) {
    return FGameplayAttribute{};
}

FGameplayTagContainer UItemDefinition::GetAllMatchingSpecs(const FGameplayTag& SpecTag) const {
    return FGameplayTagContainer{};
}

bool UItemDefinition::CanBeEquippedBy(const UAbilitySystemComponent* abComp) const {
    return false;
}

void UItemDefinition::ApplyTo_Implementation(UAbilitySystemComponent* Owner) {
}

void UItemDefinition::AddPossibleActionAfterDrop(FGameplayTag itemSpec) {
}

UItemEffectDefinition* UItemDefinition::AddOnConsume(TSubclassOf<UGameplayEffect> effectToAdd) {
    return NULL;
}

void UItemDefinition::AddLearningRecipes(TSubclassOf<UItemRecipeDefinition> recipe) {
}

void UItemDefinition::AddItemSpec(FGameplayTag itemSpec) {
}

void UItemDefinition::AddItemReqTag(FGameplayTag itemSpec) {
}

void UItemDefinition::AddCollisionEffect(FGameplayTag CollisionEffect) {
}


