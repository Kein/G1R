#pragma once
#include "CoreMinimal.h"
#include "ECinematicVisibilityMode.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "VoicelineData.h"
#include "HUDCinematicController.generated.h"

class AGothicPlayerControllerBase;
class UCinematicMainWidget;
class UCommonActivatableWidget;

UCLASS(BlueprintType)
class G1R_API UHUDCinematicController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<ECinematicVisibilityMode> m_CinematicVisibilityMode;
    
private:
    UPROPERTY()
    TSubclassOf<UCommonActivatableWidget> m_WidgetClassCinematicMain;
    
    UPROPERTY()
    TSubclassOf<UCommonActivatableWidget> m_WidgetClassCinematicTop;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_GothicPlayerController;
    
    UPROPERTY(Instanced)
    UCinematicMainWidget* W_CinematicWidget;
    
public:
    UHUDCinematicController();

    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(TEnumAsByte<ECinematicVisibilityMode> NewVisibilityMode);
    
    UFUNCTION(BlueprintCallable)
    void OnVoiceline(FVoicelineData VoicelineData);
    
private:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintNameCinematicTop();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintNameCinematicMain();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceHiddenVisibility(bool IsVisible);
    
};

