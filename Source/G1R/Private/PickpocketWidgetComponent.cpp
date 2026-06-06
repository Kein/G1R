#include "PickpocketWidgetComponent.h"
#include "Components/WidgetComponent.h"

UPickpocketWidgetComponent::UPickpocketWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->TickMode = ETickMode::Automatic;
    this->m_Widget = NULL;
}


