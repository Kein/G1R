#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UNavigationSystemV1Library.generated.h"

class AActor;
class AGothicCharacter;
class AGothicCharacterState;
class UObject;
class USpawnAIAgentDefinition;

UCLASS(BlueprintType)
class G1R_API UUNavigationSystemV1Library : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUNavigationSystemV1Library();

    UFUNCTION(BlueprintCallable)
    static bool TryGetRandomNavigablePointInRadius(const AGothicCharacterState* CharacterState, const FVector& Center, float Radius, FVector& OutPoint);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectPointExtent(const AGothicCharacter* Character, const FVector& Location, FVector& OutLocation, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool ProjectPointCustomExtentForUnspawnedCharacter(const UObject* WorldContext, const USpawnAIAgentDefinition* SpawnDefinition, const FVector& Location, FVector& OutLocation, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectPointAnyNavData(const AActor* PotentialCharacterStateProvider, const FVector& Location, FVector& OutLocation, const FVector& ExtentMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectPoint(const AGothicCharacter* Character, const FVector& Location, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectCharacterForClosestNavMeshZ(const AGothicCharacter* Character, const FVector& ReferenceCharacterLocation, FVector& OutLocation, const FVector& Extent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCharacterInRangeOfLocation(const AGothicCharacter* Character, const AGothicCharacter* OptionalTarget, const FVector& CharacterLocationToReachOutFrom, const FVector& TargetLocation, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNavLocationFrom3DLocation(const AGothicCharacter* Character, const FVector& Location3D);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetNavigationDatasDefaultQueryExtent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceUntilMoveObstructed(const AGothicCharacter* Character, const FVector& FromLocation, const FVector& MoveDirection, float MoveDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPathExistWithinLengthLimit(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, float LengthLimit, float& OutPathLength);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPathExistWithinCostLimit(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, float CostLimit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesPathExistForUnspawnedCharacter(const UObject* WorldContext, const USpawnAIAgentDefinition* SpawnDefinition, const FVector& StartLocation, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPathExistCustomAgentSize(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation, const float AgentRadius, const float AgentHeight);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPathExist(const AGothicCharacter* Character, const FVector& StartLocation, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool CanTargetBeReached3D(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutAccessableCharacterLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool CanReachLocationWithoutNavLinks(const AGothicCharacter* Character, const FVector& StartNavAgentLocation, const FVector& EndLocation, float ReachDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool CanMoveInDirection(const AGothicCharacter* Character, const FVector& FromLocation, const FVector& MoveDirection, float MoveDistance);
    
    UFUNCTION(BlueprintCallable)
    static bool CanLocationBeReached3D(const AGothicCharacter* Character, const FVector& Location3D, float ReachRangeXY, float ReachRangeZ, bool bFailWhenLocationOnDifferentFloor, bool bDebugDraw, FVector& FoundNavLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool CanGroundedTargetBeReached(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutWalkableCharacterLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool CanAnyMovmentModeTargetBeReached(const AGothicCharacter* Character, const AGothicCharacter* Target, float ReachRangeXY, float ReachRangeZ, bool bDebugDraw, FVector& OutWalkableCharacterLocation);
    
};

