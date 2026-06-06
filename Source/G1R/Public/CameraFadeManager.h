#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AbilityTaskCameraFadeSetup.h"
#include "CameraFadeDelegateDelegate.h"
#include "CameraFadeManager.generated.h"

class APlayerController;
class UCameraFadeManager;

UCLASS(BlueprintType)
class G1R_API UCameraFadeManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCameraFadeDelegate m_OnFadeOutFinished;
    
    UPROPERTY(BlueprintAssignable)
    FCameraFadeDelegate m_OnFadeInFinished;
    
protected:
    UPROPERTY(Transient)
    FAbilityTaskCameraFadeSetup m_FadeSetup;
    
    UPROPERTY(Transient)
    APlayerController* m_PlayerController;
    
public:
    UCameraFadeManager();

    UFUNCTION(BlueprintCallable)
    void FadeOut();
    
    UFUNCTION(BlueprintCallable)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable)
    static UCameraFadeManager* Create(APlayerController* Outer, FAbilityTaskCameraFadeSetup Setup);
    
};

