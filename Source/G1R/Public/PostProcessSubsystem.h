#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "GameStateSubsystem.h"
#include "CallbackDelegate.h"
#include "OnOutlineStateChangedDelegate.h"
#include "OnSharpenStateChangedDelegate.h"
#include "OnWorldFadeStateChangedDelegate.h"
#include "PostProcessSubsystem.generated.h"

class UObject;
class UPostProcessSubsystem;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class G1R_API UPostProcessSubsystem : public UGameStateSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle FadePostProcessTimer;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnSharpenStateChanged OnSharpenStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnWorldFadeStateChanged OnWorldFadeStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnOutlineStateChanged OnOutlineStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite)
    float FadeRadius;
    
    UPROPERTY(BlueprintReadWrite)
    float TransitionLength;
    
    UPROPERTY(BlueprintReadWrite)
    float NoiseScale;
    
    UPROPERTY(BlueprintReadWrite)
    float NoiseStrength;
    
    UPROPERTY(BlueprintReadWrite)
    float WorldFadeEnvironmentSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float WorldFadeTransitionSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float IdleBeforePlayerFadesSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float PlayerFadeSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float FadeInTimeScale;
    
    UPROPERTY(BlueprintReadWrite)
    float FadeOutTimeScale;
    
    UPROPERTY()
    bool SharpenActive;
    
    UPROPERTY()
    bool WorldFadeActive;
    
    UPROPERTY()
    bool OutlineActive;
    
public:
    UPostProcessSubsystem();

    UFUNCTION()
    void UpdateSharpenPostProcess();
    
    UFUNCTION(BlueprintCallable)
    void SetWorldFadeActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpenSystemIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable)
    void SetSharpenActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void SetOutlineActive(bool IsActive);
    
    UFUNCTION(BlueprintPure)
    bool IsWorldFadeActive();
    
    UFUNCTION(BlueprintPure)
    bool IsSharpenActive();
    
    UFUNCTION(BlueprintPure)
    bool IsOutlineActive();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UPostProcessSubsystem* GetPostProcessSubsystem(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutWorldProgressively(const TArray<UPrimitiveComponent*>& LastFadeOutPrimitives, const FCallback& OnFadeOutFinished);
    
    UFUNCTION(BlueprintCallable)
    void FadeInWorldProgressively(const TArray<UPrimitiveComponent*>& FirstFadeInPrimitives, const FCallback& OnFadeInFinished);
    
};

