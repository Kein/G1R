#include "SplineNavAreaModifierComponent.h"
#include "NavAreas/NavArea_Null.h"

USplineNavAreaModifierComponent::USplineNavAreaModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->StepSize = 50.00f;
    this->SimplifyIfAngleDifferenceIsLessThan = 10.00f;
    this->SimplifyIfScaleDifferenceIsLessThan = 0.10f;
    this->Width = 100.00f;
    this->Height = 200.00f;
    this->NavArea = UNavArea_Null::StaticClass();
}


