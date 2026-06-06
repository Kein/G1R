#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemVisualWorld.h"
#include "PouchActor.generated.h"

class UPickpocketWidgetComponent;

UCLASS(Abstract)
class APouchActor : public AItemVisualWorld {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UPickpocketWidgetComponent* m_widgetComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag m_CollisionEffectTag;
    
public:
    APouchActor(const FObjectInitializer& ObjectInitializer);

};

