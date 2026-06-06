#include "ConversationCameraPresetFoVAngle.h"

UConversationCameraPresetFoVAngle::UConversationCameraPresetFoVAngle() {
}

void UConversationCameraPresetFoVAngle::GetFocusPoint(const FTransform& InputTransform, AActor* Speaker, AActor* Listener, FVector& OutPoint, float& OutFoVAngle) const {
}

FTransform UConversationCameraPresetFoVAngle::CalculateOffsetFromAngles(const FVector& SpeakerPos, const FVector& ListenerPos, const float HorizontalOffsetAngle, const float VerticalOffsetAngle, float FoVAngleFactor) const {
    return FTransform{};
}


