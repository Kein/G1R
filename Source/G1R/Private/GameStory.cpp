#include "GameStory.h"
#include "Templates/SubclassOf.h"

UGameStory::UGameStory() {
    this->ChapterFormatText = FText::FromString(TEXT("Chapter {ChapterNum}"));
    this->Chapter = 0;
    this->bShouldActivateStory = false;
    this->SortOrder = 1.00f;
}

void UGameStory::RequestChapterHUDNotification(int32 NewChapter) {
}

bool UGameStory::IsStoryActive(const UObject* WorldContextObject, TSubclassOf<UGameStory> StoryClass) {
    return false;
}

bool UGameStory::IsInChapter(int32 Number) const {
    return false;
}

bool UGameStory::HasReachedChapter(int32 Number) const {
    return false;
}

TSubclassOf<UGameStory> UGameStory::GetMainStoryClass(const UObject* WorldContextObject) {
    return NULL;
}

UGameStory* UGameStory::GetMainStory(const UObject* WorldContextObject) {
    return NULL;
}

FText UGameStory::GetChapterDisplayName(int32 ChapterIndex) {
    return FText::GetEmpty();
}

int32 UGameStory::GetChapter() const {
    return 0;
}

TArray<UGameStory*> UGameStory::GetAllActiveStories(const UObject* WorldContextObject) {
    return TArray<UGameStory*>();
}

UGameStory* UGameStory::GetActiveStoryOfClass(const UObject* WorldContextObject, TSubclassOf<UGameStory> StoryClass) {
    return NULL;
}

void UGameStory::DeactivateStoryDataLayer(const FString& DataLayerName) {
}

void UGameStory::ChangeChapter(int32 NewChapter) {
}


void UGameStory::ActivateStoryDataLayer(const FString& DataLayerName) {
}


