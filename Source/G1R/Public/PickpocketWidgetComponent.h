#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "PickpocketWidgetComponent.generated.h"

class UPickpocketWidget;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPickpocketWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UPickpocketWidget* m_Widget;
    
public:
    UPickpocketWidgetComponent(const FObjectInitializer& ObjectInitializer);

};

