#include "AmbientCharacter.h"
#include "GothicBaseMovementComponent.h"

AAmbientCharacter::AAmbientCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicBaseMovementComponent>(TEXT("CharMoveComp"))) {
    //FIXME this->bNeverApplyTickOptimizations = true;
}


