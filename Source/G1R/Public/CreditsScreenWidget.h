#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CreditsScreenWidget.generated.h"

class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class G1R_API UCreditsScreenWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BaseCreditsScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CreditsSpeedUpMultiplier;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite)
    float m_SpeedUpDirection;
    
public:
    UCreditsScreenWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCreditsFinished();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentScrollSpeed() const;
    
};

