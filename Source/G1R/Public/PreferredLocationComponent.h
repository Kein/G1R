#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "InteractionSpotHandle.h"
#include "PreferredLocationComponent.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, Within=GothicCharacterState, meta=(BlueprintSpawnableComponent))
class G1R_API UPreferredLocationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector StartingPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator StartingRotation;
    
public:
    UPreferredLocationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool TryGetRememberedLocationOriginalName(FName RememberedLocationName, FName& originalName) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetRememberedLocation(FName RememberedLocationName, FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    void RememberPositionAs(FName RememberAs, FVector position, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void RememberInteractionSpotAs(FName RememberAs, FInteractionSpotHandle InteractionSpot, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void PreferSpawnpoint(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void PreferPosition(FVector position, float Radius);
    
    UFUNCTION(BlueprintCallable)
    bool PreferLocationKnownAs(FName RememberedLocationName, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void PreferInteractionSpot(FInteractionSpotHandle Spot, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void PreferAnywhere();
    
    UFUNCTION(BlueprintPure)
    bool KnowsLocation(FName RememberedLocationName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRememberingThisLocationName(FName RememberedLocationName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPreferringAnyGivenWaypointByName(const TArray<FName>& WaypointNames, int32& OutIdx) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPositionInside(const FVector& position) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInside() const;
    
    UFUNCTION(BlueprintPure)
    bool HasPreferredLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomPointWithin() const;
    
    UFUNCTION(BlueprintPure)
    float GetRadiusFromCenter() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceFromSelf() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceFromPosition(const FVector& position) const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceFromActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCenterPoint() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCenterAndRadius(FVector& OutCenter, float& OutRadius) const;
    
};

