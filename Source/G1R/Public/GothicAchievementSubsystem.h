#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "MemorizedEvent.h"
#include "GothicAchievementSubsystem.generated.h"

class UGothicAchievement;
class UGothicAchievementSubsystem;
class UObject;

UCLASS(BlueprintType)
class G1R_API UGothicAchievementSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UGothicAchievement*> PendingAchievements;
    
    UPROPERTY()
    TArray<UGothicAchievement*> CompletedAchievements;
    
    UPROPERTY()
    bool bDemoAchievementUnlocked;
    
public:
    UGothicAchievementSubsystem();

protected:
    UFUNCTION()
    void UpdateAchievementsWithMemorizedEvent(const FMemorizedEvent& MemorizedEvent);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAchievements();
    
    UFUNCTION()
    void UnlockAchievement(const FString& AchievementID);
    
    UFUNCTION()
    void SetAchievementProgress(const FString& AchievementID, float Progress);
    
    UFUNCTION()
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable)
    bool IsDemoAchievementUnlocked();
    
protected:
    UFUNCTION()
    void InitializeAchievements();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UGothicAchievement*> GetPendingAchievements() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGothicAchievementSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION()
    float ConvertProgressForPlattform(int32 CurrentProgress, int32 MaxProgress) const;
    
};

