#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotsLibrary.generated.h"

class AGothicCharacterState;
class AVolume;
class UAreaTagRegionTrait;
class UBrushComponent;
class UObject;

UCLASS(BlueprintType)
class G1R_API UInteractionSpotsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractionSpotsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SortSpotArrayByDistance(TArray<FInteractionSpotHandle>& Spots, const FVector& Center, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsSpotReachableByCharacter(const AGothicCharacterState* CharacterState, const FInteractionSpotHandle& Handle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector GetLocationByName(FName InteractionSpotName, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInteractionSpotHandle> FindSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInteractionSpotHandle> FindSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FInteractionSpotHandle> FindSpotsPotentiallyUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindSpotsInRadius2D(const FVector2D& Location, float Radius, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindSpotsInRadius(const FVector& Location, float Radius, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindSpotsInBrush(UBrushComponent* Brush, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindSpotsInBox3D(const FBox& Box, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindSpotsInBox2D(const FBox2D& Box, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindReachableSpotsInBox(const FBox& Box, const UObject* WorldContextObject, AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintCallable)
    static FInteractionSpotHandle FindRandomReachableUsableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    static FInteractionSpotHandle FindRandomReachableUnclaimedSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInteractionSpotHandle FindRandomReachableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FInteractionSpotHandle FindRandomReachableClaimableSpotInRadiusWithTag(AGothicCharacterState* ForCharacter, const FVector& Location, float Radius, FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInteractionSpotHandle FindClosestUsableSpotInRadiusWithTag(AGothicCharacterState* PotentialUser, const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInteractionSpotHandle FindClosestUnclaimedSpotInRadiusWithTag(const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FInteractionSpotHandle FindClosestSpotInRadiusWithTag(const FVector& Location, float Radius, FGameplayTag Tag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindAllSpotsInVolume(AVolume* Volume, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindAllSpotsInAreaAtLocation(const FVector& Location, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindAllSpotsInArea(UAreaTagRegionTrait* Area, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FInteractionSpotHandle> FindAllReachableSpotsInAreaAtLocation(const FVector& Location, AGothicCharacterState* CharacterState, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool CanFindSpotsUsableByPawnInRadius_TryMultipleActions(AGothicCharacterState* PotentialUser, const FGameplayTagContainer& PossibleActions, const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static bool CanFindSpotsUsableByPawnInRadius(AGothicCharacterState* PotentialUser, FGameplayTag Action, const FVector& Location, float Radius);
    
};

