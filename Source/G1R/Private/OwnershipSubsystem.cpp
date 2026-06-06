#include "OwnershipSubsystem.h"
#include "Templates/SubclassOf.h"

UOwnershipSubsystem::UOwnershipSubsystem() {
}

void UOwnershipSubsystem::SetPersonalItemOwnershipForContext(AGothicCharacterState* CharacterState, const UObject* Context, const FPersonalItemOwnershipSettings& Ownership) {
}

void UOwnershipSubsystem::SetPersonalAreaOwnershipForContext(AGothicCharacterState* CharacterState, const UObject* Context, const FPersonalAreaOwnershipSettings& Ownership) {
}

void UOwnershipSubsystem::RemovePersonalItemOwnershipOfContext(AGothicCharacterState* CharacterState, const UObject* Context) {
}

void UOwnershipSubsystem::RemovePersonalAreaOwnershipOfContext(AGothicCharacterState* CharacterState, const UObject* Context) {
}

bool UOwnershipSubsystem::IsGuildOwnerOfArea(const FGameplayTag& Guild, const FGameplayTag& Area) const {
    return false;
}

bool UOwnershipSubsystem::IsCharacterPersonalOwnerOfItemVisual(const AGothicCharacterState* CharacterState, const AItemVisualWorld* ItemVisualWorld) const {
    return false;
}

bool UOwnershipSubsystem::IsCharacterPersonalOwnerOfItem(const AGothicCharacterState* CharacterState, const FItemVirtualData& ItemData) const {
    return false;
}

bool UOwnershipSubsystem::IsCharacterPersonalOwnerOfArea(const AGothicCharacterState* CharacterState, const FGameplayTag& Area) const {
    return false;
}

bool UOwnershipSubsystem::IsAreaOwnedByAnyPerson(const FGameplayTag& Area) const {
    return false;
}

bool UOwnershipSubsystem::IsAreaOwnedByAnyone(const FGameplayTag& Area) const {
    return false;
}

bool UOwnershipSubsystem::IsAreaOwnedByAnyGuild(const FGameplayTag& Area) const {
    return false;
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetPersonalOwnersOfItemType(TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const {
    return TSet<AGothicCharacterState*>();
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetPersonalOwnersFromConfig(const FOwnershipSettings& ItemOwnershipSettings) const {
    return TSet<AGothicCharacterState*>();
}

FGameplayTagContainer UOwnershipSubsystem::GetOwningGuildsOfItemType(TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const {
    return FGameplayTagContainer{};
}

EOwnershipRelationFlags UOwnershipSubsystem::GetOwnershipRelationOfItemVirtualData(const AGothicCharacterState* CharacterState, const FItemVirtualData& Item) const {
    return EOwnershipRelationFlags::None;
}

EOwnershipRelationFlags UOwnershipSubsystem::GetOwnershipRelationOfItemType(const AGothicCharacterState* CharacterState, TSubclassOf<UItemDefinition> ItemDefinition, const FOwnershipSettings& ItemOwnershipSettings) const {
    return EOwnershipRelationFlags::None;
}

EOwnershipRelationFlags UOwnershipSubsystem::GetOwnershipRelationOfItemInWorld(const AGothicCharacterState* CharacterState, const AItemVisualWorld* Item) const {
    return EOwnershipRelationFlags::None;
}

EOwnershipRelationFlags UOwnershipSubsystem::GetOwnershipRelationOfInteractiveObjectInWorld(const AGothicCharacterState* CharacterState, const AInteractiveObjectActor* InteractiveObject) const {
    return EOwnershipRelationFlags::None;
}

EOwnershipRelationFlags UOwnershipSubsystem::GetOwnershipRelationOfCharacter(const AGothicCharacterState* CharacterState, const FOwnershipSettings& OwnershipSettings) const {
    return EOwnershipRelationFlags::None;
}

FGameplayTagContainer UOwnershipSubsystem::GetGuildOwnersFromConfig(const FOwnershipSettings& ItemOwnershipSettings) const {
    return FGameplayTagContainer{};
}

EOwnershipRelationFlags UOwnershipSubsystem::GetCharacterOwnershipOfArea(const AGothicCharacterState* CharacterState, const FGameplayTag& Area) const {
    return EOwnershipRelationFlags::None;
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetAllPersonalOwnersOfItemVisual(const AItemVisualWorld* ItemVisualWorld) const {
    return TSet<AGothicCharacterState*>();
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetAllPersonalOwnersOfItem(const FItemVirtualData& ItemData) const {
    return TSet<AGothicCharacterState*>();
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetAllPersonalOwnersOfInteractiveObject(const AInteractiveObjectActor* InteractiveObjectActor) const {
    return TSet<AGothicCharacterState*>();
}

TSet<AGothicCharacterState*> UOwnershipSubsystem::GetAllPersonalOwnersOfArea(const FGameplayTag& Area) const {
    return TSet<AGothicCharacterState*>();
}

FGameplayTagContainer UOwnershipSubsystem::GetAllGuildsOwningArea(const FGameplayTag& Area) const {
    return FGameplayTagContainer{};
}


