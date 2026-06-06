#include "CarriableWorldItem.h"

ACarriableWorldItem::ACarriableWorldItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsClickable = true;
    this->bCustomCollision = true;
    this->DestructionCheckIntervall = 5.00f;
    this->State = EWorldItemState::Default;
}


