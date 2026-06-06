#include "AnimNotifyState_AmbientAnimationProp.h"
#include "Animation/SkeletalMeshActor.h"
#include "Engine/StaticMeshActor.h"

UAnimNotifyState_AmbientAnimationProp::UAnimNotifyState_AmbientAnimationProp() {
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->AnimationMontage = NULL;
    this->bFollowCharacterAnimation = true;
    this->PropActorTag = TEXT("AmbientProp");
    this->StaticMeshActorClass = AStaticMeshActor::StaticClass();
    this->SkeletalMeshActorClass = ASkeletalMeshActor::StaticClass();
}

void UAnimNotifyState_AmbientAnimationProp::OnOwnerEndPlay(AActor* InOwner, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) const {
}

void UAnimNotifyState_AmbientAnimationProp::OnOwnerDestroyed(AActor* InOwner) const {
}


