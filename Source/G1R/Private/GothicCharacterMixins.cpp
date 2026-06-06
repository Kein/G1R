#include "GothicCharacterMixins.h"

UGothicCharacterMixins::UGothicCharacterMixins() {
}

void UGothicCharacterMixins::SetTargetedComponent(const AGothicCharacter* This, USceneComponent* TargetComponent) {
}

void UGothicCharacterMixins::SetTargetedActor(const AGothicCharacter* This, AActor* TargetActor, bool isCameraRelevant) {
}

bool UGothicCharacterMixins::HasAnyOverlappingNPCs(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale) {
    return false;
}

bool UGothicCharacterMixins::HasAnyOverlappingCharacters(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale) {
    return false;
}

bool UGothicCharacterMixins::HasAliveUndefeatedOverlappingNPCs(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale) {
    return false;
}

bool UGothicCharacterMixins::HasAliveUndefeatedOverlappingCharacters(const AGothicCharacter* This, const FVector& TestLocation, TArray<AGothicCharacter*>& OutOtherCharacters, const FVector& ThisExtentScale) {
    return false;
}

USceneComponent* UGothicCharacterMixins::GetTargetedComponent(const AGothicCharacter* This) {
    return NULL;
}

AActor* UGothicCharacterMixins::GetTargetedActor(const AGothicCharacter* This) {
    return NULL;
}

TEnumAsByte<EPathFollowingStatus::Type> UGothicCharacterMixins::GetPathfollowingStatus(const AGothicCharacter* This) {
    return EPathFollowingStatus::Idle;
}

float UGothicCharacterMixins::GetDistanceBetweenCollisions(const AGothicCharacter* Self, const AGothicCharacter* Other) {
    return 0.0f;
}

TArray<AGothicCharacter*> UGothicCharacterMixins::GetAllTargetingThis(const AGothicCharacter* This) {
    return TArray<AGothicCharacter*>();
}


