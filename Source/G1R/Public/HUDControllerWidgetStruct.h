#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"
#include "HUDControllerWidgetStruct.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FHUDControllerWidgetStruct {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UUserWidget* m_Widget;
    
    UPROPERTY()
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY()
    ESlateVisibility m_LastStateVisibility;
    
    G1R_API FHUDControllerWidgetStruct();
};

