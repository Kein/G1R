#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "CharacterPersonalSpaceSubsystem.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType)
class G1R_API UCharacterPersonalSpaceSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCharacterPersonalSpaceSubsystem();

    UFUNCTION(BlueprintCallable)
    static bool TryFindSpreadOutLocationWithinGroup(AGothicCharacter* Character, TArray<AGothicCharacter*>& Group, float WantedMoveDistance, float MinMoveDistance, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool TryFindSpreadOutLocationFromAllCharactersNearby(AGothicCharacter* Character, float FindNearbyCharactersRadius, float WantedMoveDistance, float MinMoveDistance, FVector& OutLocation);
    
    UFUNCTION(BlueprintCallable)
    void StopTrackingCharacter(const AGothicCharacter* GothicCharacter);
    
    UFUNCTION(BlueprintCallable)
    void StartTrackingCharacter(AGothicCharacter* GothicCharacter, float TraceDistance, int32 TraceCount, bool bDebugDraw);
    
    UFUNCTION(BlueprintCallable)
    static bool CanMoveStraightToLocation(AGothicCharacter* Character, const FVector& TestLocation, FVector& OutHitLocation, const FVector& CharacterExtentFactor);
    
    UFUNCTION(BlueprintCallable)
    static bool CanMoveStraightInDirection(const AGothicCharacter* Character, const FVector& Direction, float Distance, FVector& OutHitLocation, const FVector& CharacterExtentFactor);
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UCharacterPersonalSpaceSubsystem, STATGROUP_Tickables); }
};

