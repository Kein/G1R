#include "GothicAchievementSubsystem.h"

UGothicAchievementSubsystem::UGothicAchievementSubsystem() {
    this->bDemoAchievementUnlocked = false;
}

void UGothicAchievementSubsystem::UpdateAchievementsWithMemorizedEvent(const FMemorizedEvent& MemorizedEvent) {
}

void UGothicAchievementSubsystem::UpdateAchievements() {
}

void UGothicAchievementSubsystem::UnlockAchievement(const FString& AchievementID) {
}

void UGothicAchievementSubsystem::SetAchievementProgress(const FString& AchievementID, float Progress) {
}

void UGothicAchievementSubsystem::ResetAchievements() {
}

bool UGothicAchievementSubsystem::IsDemoAchievementUnlocked() {
    return false;
}

void UGothicAchievementSubsystem::InitializeAchievements() {
}

TArray<UGothicAchievement*> UGothicAchievementSubsystem::GetPendingAchievements() const {
    return TArray<UGothicAchievement*>();
}

UGothicAchievementSubsystem* UGothicAchievementSubsystem::Get(const UObject* WorldContextObject) {
    return NULL;
}

float UGothicAchievementSubsystem::ConvertProgressForPlattform(int32 CurrentProgress, int32 MaxProgress) const {
    return 0.0f;
}


