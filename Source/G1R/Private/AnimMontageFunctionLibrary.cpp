#include "AnimMontageFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAnimMontageFunctionLibrary::UAnimMontageFunctionLibrary() {
}

float UAnimMontageFunctionLibrary::GetRootMotionDistanceToNotify(const UAnimMontage* AnimMontage, TSubclassOf<UAnimNotify> UpToNotifyClass) {
    return 0.0f;
}


