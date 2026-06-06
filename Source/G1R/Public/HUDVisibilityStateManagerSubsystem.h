#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "EGothicHUDVisibilityState.h"
#include "HUDVisibilityStateManagerSubsystem.generated.h"

class UConversationWidget;
class UGameOverWidget;
class UHUDVisibilityStateManagerSubsystem;
class UPauseMenuWidget;

UCLASS(BlueprintType)
class G1R_API UHUDVisibilityStateManagerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    TSoftObjectPtr<UConversationWidget> m_ConversationWidget;
    
    UPROPERTY(Export)
    TSoftObjectPtr<UPauseMenuWidget> m_PauseMenuWidget;
    
    UPROPERTY(Export)
    TSoftObjectPtr<UGameOverWidget> m_GameOverMenuWidget;
    
public:
    UHUDVisibilityStateManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void ShowGameOverWidget();
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(EGothicHUDVisibilityState oldState);
    
    UFUNCTION(BlueprintCallable)
    bool HasState(EGothicHUDVisibilityState StateToCheck);
    
    UFUNCTION(BlueprintCallable)
    static UHUDVisibilityStateManagerSubsystem* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void AddState(EGothicHUDVisibilityState NewState);
    
};

