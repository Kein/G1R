#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "EGameInputDevice.h"
#include "EGameInputMode.h"
#include "GameControllerDirectionChangedDelegateDelegate.h"
#include "GameInputDeviceModeChangedDelegateDelegate.h"
#include "G1RGameInstance.generated.h"

class UGothicGameUserSettings;
class UUserWidget;

UCLASS(NonTransient)
class G1R_API UG1RGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMainMapLoadedComplete, bool, isNewGame);
    
    UPROPERTY(BlueprintAssignable)
    FOnMainMapLoadedComplete MainMapLoadedComplete;
    
    UPROPERTY(BlueprintAssignable)
    FGameInputDeviceModeChangedDelegate GameInputDeviceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameControllerDirectionChangedDelegate GameControllerDirectionChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_InvertedVerticalCamera;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_InvertedHorizontalCamera;
    
    UPROPERTY(BlueprintReadWrite)
    float m_CameraSensitivity;
    
    UG1RGameInstance();

    UFUNCTION(BlueprintCallable)
    void SetQuickLoadAfterLoadMap(bool save);
    
    UFUNCTION(BlueprintCallable)
    void SetInputMode(EGameInputMode Mode, UUserWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintPure)
    UGothicGameUserSettings* GetSettings() const;
    
    UFUNCTION(BlueprintPure)
    EGameInputMode GetInputMode() const;
    
    UFUNCTION(BlueprintPure)
    EGameInputDevice GetInputDevice() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugOnScreenBuildInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DestroySession() const;
    
};

