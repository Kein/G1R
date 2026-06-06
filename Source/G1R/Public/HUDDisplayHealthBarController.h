#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDDisplayHealthBarController.generated.h"

class AActor;
class UCombatTargetMarkerWidget;

UCLASS(BlueprintType)
class G1R_API UHUDDisplayHealthBarController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* OldTarget;
    
private:
    UPROPERTY(Instanced)
    UCombatTargetMarkerWidget* m_TargetCombatMarker;
    
public:
    UHUDDisplayHealthBarController();

protected:
    UFUNCTION(BlueprintCallable)
    static FString GetCombatTargetMarkerBlueprintName();
    
};

