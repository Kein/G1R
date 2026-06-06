#include "PuzzlesSubsystem.h"
#include "Templates/SubclassOf.h"

UPuzzlesSubsystem::UPuzzlesSubsystem() {
}

void UPuzzlesSubsystem::SetCreatureKillCounterMap(const TMap<FName, int32>& NewKillMap) {
}

void UPuzzlesSubsystem::OnPuzzlePositionsMessage(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload) {
}

void UPuzzlesSubsystem::OnDoorTriggers(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload) {
}

void UPuzzlesSubsystem::OnDeathCreature(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload) {
}

void UPuzzlesSubsystem::GlobalUnlockDoor(const UObject* WorldContextObject, FName DoorName) {
}

void UPuzzlesSubsystem::GlobalOpenDoorWorld(UWorld* World, FName connected) {
}

void UPuzzlesSubsystem::GlobalOpenDoor(const UObject* WorldContextObject, FName connected) {
}

void UPuzzlesSubsystem::GlobalCloseDoorWorld(UWorld* World, FName connected) {
}

void UPuzzlesSubsystem::GlobalCloseDoor(const UObject* WorldContextObject, FName connected) {
}

void UPuzzlesSubsystem::GlobalCallGameplayMessage(UWorld* World, FGameplayTag Channel, FName connected) {
}

TMap<FName, int32> UPuzzlesSubsystem::GetCreatureKillCounterMap() const {
    return TMap<FName, int32>();
}

FName UPuzzlesSubsystem::FindCreatureUniqueNameByDoorToOpenName(FName DoorToOpenName) {
    return NAME_None;
}

void UPuzzlesSubsystem::CheckPuzzles(FPuzzleCreatureCounter& counter) {
}

void UPuzzlesSubsystem::CallGlobalEvent(UWorld* World, FName connected) {
}

void UPuzzlesSubsystem::CallGameplayMessage(const UObject* WorldContextObject, FGameplayTag Channel, FName connected) {
}

//FIXME
void UPuzzlesSubsystem::AddPuzzleEntryData(const FName& creatureName, const int32 requiredKills, const EPuzzleEvent puzzleEvent, const UClass* extraData) {
}

void UPuzzlesSubsystem::AddPuzzleEntry(const FName& creatureName, const FName& DoorName, const FName& SaveState, int32 requiredKills, EPuzzleEvent puzzleEvent) {
}

void UPuzzlesSubsystem::AddPuzzleCount(const TSubclassOf<UPuzzleCountExtraData>& extraData) {
}


