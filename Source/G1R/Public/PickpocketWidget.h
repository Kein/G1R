#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPickpocketDifficultyType.h"
#include "PickpocketWidget.generated.h"

UCLASS(EditInlineNew)
class UPickpocketWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPickpocketWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetPickpocketDifficultyType(EPickpocketDifficultyType difficultyType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPickpocketDetected(bool detected);
    
};

