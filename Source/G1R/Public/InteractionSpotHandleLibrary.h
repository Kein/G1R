#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotClaimToken.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotHandleLibrary.generated.h"

class AActor;
class AGothicCharacterState;
class UAreaTagRegionTrait;
class UObject;

UCLASS(BlueprintType)
class G1R_API UInteractionSpotHandleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractionSpotHandleLibrary();

    UFUNCTION(BlueprintCallable)
    static void UNSET(FInteractionSpotHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTransform(const FInteractionSpotHandle& Handle, const FTransform& NewTransform, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag SelectMatchingMoreSpecificAction(const FInteractionSpotHandle& Handle, FGameplayTag Action, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsValid(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsUsedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsUnclaimed(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsSet(const FInteractionSpotHandle& Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationWithinRange2D(const FInteractionSpotHandle& Handle, const FVector2D& Location, float Radius, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLocationWithinRange(const FInteractionSpotHandle& Handle, const FVector& Location, float Radius, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInCooldown(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsCustomUseConditionFulfilled(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action);
    
    UFUNCTION(BlueprintPure)
    static bool IsClaimedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyOfActionsPossibleHere(const FInteractionSpotHandle& Handle, const FGameplayTagContainer& Actions, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAllowingAnyOrientationWhenUsing(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActionPossibleHere(const FInteractionSpotHandle& Handle, FGameplayTag Action, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void Invalidate(FInteractionSpotHandle& Handle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FTransform GetTransform(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetPathCostFrom(const FInteractionSpotHandle& Handle, const AGothicCharacterState* PotentialUser);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetLocation(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetForwardDirection(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceToActor(const FInteractionSpotHandle& Handle, AActor* Actor);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetAreaRadius(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAreaTagRegionTrait* GetAreaFromSpotHandle(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetAllowsChainingActions(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetAllAreasFromSpotHandle(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActorToInteractWith(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FInteractionSpotClaimToken Claim(FInteractionSpotHandle& Handle, AGothicCharacterState* User, FGameplayTag Action);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeUsedBy_TryMultipleActions(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTagContainer Actions);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeUsedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeClaimedBy_TryMultipleActions(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTagContainer Actions);
    
    UFUNCTION(BlueprintCallable)
    static bool CanBeClaimedBy(const FInteractionSpotHandle& Handle, AGothicCharacterState* PotentialUser, FGameplayTag Action);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FBox2D BoundingBox2D(const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
};

