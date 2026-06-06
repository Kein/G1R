#include "PouchActor.h"
#include "PickpocketWidgetComponent.h"

APouchActor::APouchActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_widgetComponent = CreateDefaultSubobject<UPickpocketWidgetComponent>(TEXT("WidgetComponent"));
    this->m_widgetComponent->SetupAttachment(RootComponent);
}


