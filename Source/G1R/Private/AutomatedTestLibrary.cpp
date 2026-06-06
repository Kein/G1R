#include "AutomatedTestLibrary.h"
#include "Templates/SubclassOf.h"

UAutomatedTestLibrary::UAutomatedTestLibrary() {
}

void UAutomatedTestLibrary::SetCharacterQuickItem(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition, int32 QuickSlot) {
}

void UAutomatedTestLibrary::ReleasePlayerKeyInput(FKey Key, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::ReleasePlayerButtonInput(EButtonInputID ButtonInputs, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::ReleasePlayerAxisInput(EAxisInputID AxisInputs, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::PointPlayerCameraAtLocation(const UObject* WorldContextObject, FVector Location) {
}

FVector2D UAutomatedTestLibrary::GetLocalCenter(const FGeometry& Geometry) {
    return FVector2D{};
}

UObject* UAutomatedTestLibrary::GetDefaultObject(UClass* ObjectClass) {
    return NULL;
}

TArray<FKey> UAutomatedTestLibrary::GetAllInputKeys() {
    return TArray<FKey>();
}

void UAutomatedTestLibrary::CharacterTakeOutItemOfKind(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition) {
}

void UAutomatedTestLibrary::ApplyPlayerKeyInput(FKey Key, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::ApplyPlayerButtonInput(EButtonInputID ButtonInputs, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::ApplyPlayerAxisInput(EAxisInputID AxisInputs, float AxisValue, const UObject* WorldContextObject) {
}

void UAutomatedTestLibrary::AddItemToCharacterInventory(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition, EInventoryTypes InventoryType) {
}


