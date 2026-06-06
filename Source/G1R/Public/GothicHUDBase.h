#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/HUD.h"
#include "GothicHUDBase.generated.h"

class UGothicHUDConfiguration;
class UHUDControllerBase;
class UHUDVisibilityStateManagerSubsystem;
class UUserWidget;

UCLASS(NonTransient)
class G1R_API AGothicHUDBase : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<TSoftClassPtr<UHUDControllerBase>, UHUDControllerBase*> m_Controllers;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UGothicHUDConfiguration* m_HUDConfiguration;
    
private:
    UPROPERTY(Instanced)
    UUserWidget* m_FocusWidget;
    
    UPROPERTY(Instanced)
    TArray<UUserWidget*> m_FocusWidgets;
    
    UPROPERTY()
    FVector2D m_LastMousePos;
    
    UPROPERTY()
    bool m_bMousePositionWasManuallySetLastFrame;
    
    UPROPERTY()
    bool m_IfIsFirstFrame;
    
    UPROPERTY()
    UHUDVisibilityStateManagerSubsystem* m_HUDSubsystem;
    
public:
    AGothicHUDBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFocusWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    void PushFocusWidget(UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* PopFocusWidget();
    
    UFUNCTION()
    void OnMousePositionSet(int32 MouseX, int32 MouseY);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadConfiguration();
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetFocusWidget() const;
    
    UFUNCTION()
    void EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION()
    void DrawHUD();
    
};

