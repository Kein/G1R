#include "FeedbackData.h"
#include "Templates/SubclassOf.h"

UFeedbackData::UFeedbackData() {
}

UForceFeedbackEffect* UFeedbackData::GetHitRumble(const FGameplayTag HitType) const {
    return NULL;
}

FFreezeParams UFeedbackData::GetHitFreezeParams(const FGameplayTag HitType) const {
    return FFreezeParams{};
}

TSubclassOf<UCameraShakeBase> UFeedbackData::GetHitCameraShake(const FGameplayTag HitType) const {
    return NULL;
}

UForceFeedbackEffect* UFeedbackData::GetAttackRumble(const FGameplayTag HitType) const {
    return NULL;
}

FFreezeParams UFeedbackData::GetAttackFreezeParams(const FGameplayTag HitType) const {
    return FFreezeParams{};
}

TSubclassOf<UCameraShakeBase> UFeedbackData::GetAttackCameraShake(FGameplayTag HitType) const {
    return NULL;
}

void UFeedbackData::AddHitFreezeFrame(FGameplayTag HitType, float CustomSlow, float FreezeDuration, float BlendOutDuration) {
}

void UFeedbackData::AddCameraShake(FGameplayTag HitType, TSubclassOf<UCameraShakeBase> Params) {
}

void UFeedbackData::AddAttackFreezeFrame(FGameplayTag HitType, float CustomSlow, float FreezeDuration, float BlendOutDuration) {
}


