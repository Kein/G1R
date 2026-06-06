#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CreditsScreenWidget.generated.h"

class UWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UCreditsScreenWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BaseCreditsScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CreditsSpeedUpMultiplier;
    
    UCreditsScreenWidget();

protected:
    UFUNCTION(BlueprintCallable)
    float GetFinalPositionFrom(UWidget* Widget);
    
};

