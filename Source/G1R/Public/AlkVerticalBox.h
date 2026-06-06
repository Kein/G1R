#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "AlkVerticalBox.generated.h"

class UAlkVerticalBoxSlot;
class UWidget;

UCLASS()
class G1R_API UAlkVerticalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UAlkVerticalBox();

    UFUNCTION(BlueprintCallable)
    UAlkVerticalBoxSlot* InsertChildGroupedFront(UWidget* _Content);
    
    UFUNCTION(BlueprintCallable)
    UAlkVerticalBoxSlot* InsertChildGroupedBack(UWidget* _Content);
    
    UFUNCTION(BlueprintCallable)
    UAlkVerticalBoxSlot* InsertChild(UWidget* _Content, int32 _Index);
    
};

