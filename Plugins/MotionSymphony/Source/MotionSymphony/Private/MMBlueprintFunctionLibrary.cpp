#include "MMBlueprintFunctionLibrary.h"

UMMBlueprintFunctionLibrary::UMMBlueprintFunctionLibrary() {
}

void UMMBlueprintFunctionLibrary::TransformFromUpForwardAxis(FTransform& OutTransform, const EAllAxis UpAxis, const EAllAxis ForwardAxis) {
}

void UMMBlueprintFunctionLibrary::SetTrajectoryPoint(FTrajectory& OutTrajectory, const int32 Index, const FVector Position, const float RotationZ) {
}

void UMMBlueprintFunctionLibrary::RemoveTraits(const TArray<FString>& TraitNames, FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::RemoveTraitField(const FMotionTraitField TraitsToRemove, FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::RemoveTrait(const FString& TraitName, FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::InitializeTrajectory(FTrajectory& OutTrajectory, const int32 TrajectoryCount) {
}

FVector UMMBlueprintFunctionLibrary::GetVectorRelativeToCamera(const float InputX, const float InputY, UCameraComponent* CameraComponent) {
    return FVector{};
}

FMotionTraitField UMMBlueprintFunctionLibrary::GetTraitHandleFromArray(const TArray<FString>& TraitNames) {
    return FMotionTraitField{};
}

FMotionTraitField UMMBlueprintFunctionLibrary::GetTraitHandle(const FString& TraitName) {
    return FMotionTraitField{};
}

FVector UMMBlueprintFunctionLibrary::GetInputVectorRelativeToCamera(FVector InputVector, UCameraComponent* CameraComponent) {
    return FVector{};
}

FMotionTraitField UMMBlueprintFunctionLibrary::CreateMotionTraitFieldFromArray(const TArray<FString>& TraitNames) {
    return FMotionTraitField{};
}

FMotionTraitField UMMBlueprintFunctionLibrary::CreateMotionTraitField(const FString& TraitName) {
    return FMotionTraitField{};
}

void UMMBlueprintFunctionLibrary::ClearTraitField(FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::AddTraits(const TArray<FString>& TraitNames, FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::AddTraitField(const FMotionTraitField NewTraits, FMotionTraitField& OutTraitField) {
}

void UMMBlueprintFunctionLibrary::AddTrait(const FString& TraitName, FMotionTraitField& OutTraitField) {
}


