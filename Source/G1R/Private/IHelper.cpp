#include "IHelper.h"
#include "Templates/SubclassOf.h"

UIHelper::UIHelper() {
}

bool UIHelper::StartNewGame(const UObject* WorldContextObject, const FString& ProfileName) {
    return false;
}

TSoftObjectPtr<UTexture2D> UIHelper::GetSoftItemIcon(const UItemDefinition* Item) {
    return NULL;
}

FString UIHelper::GetProfileName(UPersistentDataSubsystem* PersistentDataSubsystem) {
    return TEXT("");
}

UInventoryFilter* UIHelper::GetItemCategory(const UItemDefinition* _Item) {
    return NULL;
}

UArmorCustomizationSlotData* UIHelper::GetDefaultInitCustomizationSlotData() {
    return NULL;
}

TArray<TSubclassOf<UScriptGameplayEffect>> UIHelper::GetAttributeGEListWithPotentialUpgrades(UItemDefinition* Item, UAbilitySystemComponent* ASC) {
    return TArray<TSubclassOf<UScriptGameplayEffect>>();
}

float UIHelper::GetAnimationStartTime(UUserWidget* _Owner, UWidgetAnimation* _Animation) {
    return 0.0f;
}

FText UIHelper::GenerateDefaultSavegameName(const UObject* WorldContextObject) {
    return FText::GetEmpty();
}

FSpellsManaCost UIHelper::CalculateSpellManaCost(const FRuneStats& RuneStats) {
    return FSpellsManaCost{};
}


