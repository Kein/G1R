#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDTradingController.generated.h"

class AActor;
class AGothicPlayerControllerBase;
class UCommonActivatableWidget;
class UGothicTraderPayload;
class UTradingMain;

UCLASS(BlueprintType)
class G1R_API UHUDTradingController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSubclassOf<UCommonActivatableWidget> m_WidgetClass;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_GothicPlayerController;
    
    UPROPERTY(Instanced)
    UTradingMain* m_TradingMain;
    
    UPROPERTY()
    UGothicTraderPayload* m_GothicTraderPayload;
    
public:
    UHUDTradingController();

    UFUNCTION()
    bool OpenTradingScreen(const AActor* NPCToTrade, const UGothicTraderPayload* GothicTraderPayload);
    
private:
    UFUNCTION()
    void OnTradingScreenCloseButtonPressed();
    
    UFUNCTION()
    void OnTradingAccepted();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
public:
    UFUNCTION()
    void DoPurchase(const UGothicTraderPayload* GothicTraderPayload);
    
    UFUNCTION()
    void CloseTradingScreen();
    
};

