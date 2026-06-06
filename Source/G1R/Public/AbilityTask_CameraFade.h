#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTaskCameraFadeDelegateDelegate.h"
#include "AbilityTaskCameraFadeSetup.h"
#include "AbilityTask_CameraFade.generated.h"

class UAbilityTask_CameraFade;
class UGameplayAbility;

UCLASS()
class UAbilityTask_CameraFade : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAbilityTaskCameraFadeDelegate m_OnFadeOutFinished;
    
    UPROPERTY(BlueprintAssignable)
    FAbilityTaskCameraFadeDelegate m_OnFadeInFinished;
    
protected:
    UPROPERTY(Transient)
    FAbilityTaskCameraFadeSetup m_FadeSetup;
    
public:
    UAbilityTask_CameraFade();

    UFUNCTION(BlueprintCallable)
    void FadeIn();
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CameraFade* CreateTask(UGameplayAbility* OwningAbility, FAbilityTaskCameraFadeSetup Setup);
    
};

