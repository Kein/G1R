#include "WorldPointManager.h"

UWorldPointManager::UWorldPointManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WorldPointManagerConfigInstance = NULL;
}

void UWorldPointManager::OnQuestSave(UQuest* Quest) {
}

void UWorldPointManager::OnItemDestroyed(AActor* Target) {
}

UWorldPointManager* UWorldPointManager::GetInstance(UWorld* World) {
    return NULL;
}

UWorldPointManager* UWorldPointManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UWorldPointManager::CallNewChapter(int32 NewChapter) const {
}

void UWorldPointManager::CallGlobalEvent(FName EventName) {
}

void UWorldPointManager::CallAutoSave() {
}

void UWorldPointManager::AddDropItem(AActor* Target) {
}


