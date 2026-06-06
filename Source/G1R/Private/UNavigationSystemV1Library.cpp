#include "UNavigationSystemV1Library.h"

UUNavigationSystemV1Library::UUNavigationSystemV1Library() {
}

bool UUNavigationSystemV1Library::TryGetRandomNavigablePointInRadius(const AGothicCharacterState* CharacterState, const FVector& Center, float Radius, FVector& OutPoint) {
    return false;
}

bool UUNavigationSystemV1Library::ProjectPointExtent(const AGothicCharacter* Character, const FVector& Location, FVector& OutLocation, const FVector& Extent) {
    return false;
}

bool UUNavigationSystemV1Library::ProjectPointCustomExtentForUnspawnedCharacter(const UObject* WorldContext, const USpawnAIAgentDefinition* SpawnDefinition, const FVector& Location, FVector& OutLocation, const FVector& Extent) {
    return false;
}

bool UUNavigationSystemV1Library::ProjectPointAnyNavData(const AActor* PotentialCharacterStateProvider, const FVector& Location, FVector& OutLocation, const FVector& ExtentMultiplier) {
    return false;
}

bool UUNavigationSystemV1Library::ProjectPoint(const AGothicCharacter* Character, const FVector& Location, FVector& OutLocation) {
    return false;
}

bool UUNavigationSystemV1Library::ProjectCharacterForClosestNavMeshZ(const AGothicCharacter* Character, const FVector& ReferenceCharacterLocation, FVector& OutLocation, const FVector& Extent) {
    return false;
}

bool UUNavigationSystemV1Library::IsCharacterInRangeOfLocation(const AGothicCharacter* Character, const AGothicCharacter* OptionalTarget, const FVector& CharacterLocationToReachOutFrom, const FVector& TargetLocation, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw) {
    return false;
}

FVector UUNavigationSystemV1Library::GetNavLocationFrom3DLocation(const AGothicCharacter* Character, const FVector& Location3D) {
    return FVector{};
}

FVector UUNavigationSystemV1Library::GetNavigationDatasDefaultQueryExtent(const UObject* WorldContextObject) {
    return FVector{};
}

float UUNavigationSystemV1Library::GetDistanceUntilMoveObstructed(const AGothicCharacter* Character, const FVector& FromLocation, const FVector& MoveDirection, float MoveDistance) {
    return 0.0f;
}

bool UUNavigationSystemV1Library::DoesPathExistWithinLengthLimit(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, float LengthLimit, float& OutPathLength) {
    return false;
}

bool UUNavigationSystemV1Library::DoesPathExistWithinCostLimit(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, float CostLimit) {
    return false;
}

bool UUNavigationSystemV1Library::DoesPathExistForUnspawnedCharacter(const UObject* WorldContext, const USpawnAIAgentDefinition* SpawnDefinition, const FVector& StartLocation, const FVector& EndLocation) {
    return false;
}

bool UUNavigationSystemV1Library::DoesPathExistCustomAgentSize(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, const float AgentRadius, const float AgentHeight) {
    return false;
}

bool UUNavigationSystemV1Library::DoesPathExist(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation) {
    return false;
}

bool UUNavigationSystemV1Library::CanTargetBeReached3D(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutAccessableCharacterLocation) {
    return false;
}

bool UUNavigationSystemV1Library::CanReachLocationWithoutNavLinks(const AGothicCharacter* Character, const FVector& StartNavAgentLocation, const FVector& EndLocation, float ReachDistance) {
    return false;
}

bool UUNavigationSystemV1Library::CanMoveInDirection(const AGothicCharacter* Character, const FVector& FromLocation, const FVector& MoveDirection, float MoveDistance) {
    return false;
}

bool UUNavigationSystemV1Library::CanLocationBeReached3D(const AGothicCharacter* Character, const FVector& Location3D, float ReachRangeXY, float ReachRangeZ, bool bFailWhenLocationOnDifferentFloor, bool bDebugDraw, FVector& FoundNavLocation) {
    return false;
}

bool UUNavigationSystemV1Library::CanGroundedTargetBeReached(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutWalkableCharacterLocation) {
    return false;
}

bool UUNavigationSystemV1Library::CanAnyMovmentModeTargetBeReached(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutWalkableCharacterLocation) {
    return false;
}


