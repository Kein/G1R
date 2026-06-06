#include "GameStateSubsystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UGameStateSubsystemBlueprintLibrary::UGameStateSubsystemBlueprintLibrary() {
}

UGameStateSubsystem* UGameStateSubsystemBlueprintLibrary::GetGameStateSubsystemFromGameState(AGameStateBase* GameState, TSubclassOf<UGameStateSubsystem> Class) {
    return NULL;
}

UGameStateSubsystem* UGameStateSubsystemBlueprintLibrary::GetGameStateSubsystem(UObject* ContextObject, TSubclassOf<UGameStateSubsystem> Class) {
    return NULL;
}


