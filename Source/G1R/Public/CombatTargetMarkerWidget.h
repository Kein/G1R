#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "CombatTargetMarkerWidget.generated.h"

class AActor;

UCLASS(EditInlineNew)
class G1R_API UCombatTargetMarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* m_TargetedActor;
    
public:
    UCombatTargetMarkerWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePositionBP(FVector2D NewPos);
    
};

