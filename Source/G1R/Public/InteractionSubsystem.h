#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "InteractionSpot.h"
#include "InteractionSpotClaimToken.h"
#include "InteractionSpotHandle.h"
#include "InteractionSpotUseToken.h"
#include "InteractionSubsystem.generated.h"

class AActor;
class AGothicCharacterState;
class UInteractionSubsystem;
class UObject;

UCLASS(BlueprintType, Config=Game)
class G1R_API UInteractionSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, FInteractionSpot> SpotsByName;
    
    UPROPERTY(Config)
    TArray<FString> InteractionSpotSourceFiles;
    
public:
    UInteractionSubsystem();

    UFUNCTION(BlueprintCallable)
    FInteractionSpotUseToken UseSpot(const FInteractionSpotClaimToken& ClaimToken);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCooldowns();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpot(FInteractionSpotHandle Spot);
    
    UFUNCTION(BlueprintCallable)
    void MoveSpot(FInteractionSpotHandle Spot, const FTransform& NewTransform);
    
    UFUNCTION(BlueprintPure)
    bool IsSpotClaimedBy(FInteractionSpotHandle Spot, const AGothicCharacterState* User) const;
    
    UFUNCTION(BlueprintPure)
    bool IsSpotBlockedByClaimedOtherSpot(FInteractionSpotHandle Spot) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPawnAbilityToUseSpot(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const;
    
protected:
    UFUNCTION()
    void HandleUserDestroyed(AActor* Actor);
    
    UFUNCTION()
    void HandleClaimerDestroyed(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInteractionSubsystem* GetInteractionSpots(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    FName GenerateUniqueSpotName(const FString& BasedOn) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionSpotHandle FindSpotByName(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> DebugCanPawnClaimSpotFailReason(FInteractionSpotHandle Spot, AGothicCharacterState* PotentialUser, FGameplayTag Action) const;
    
    UFUNCTION(BlueprintCallable)
    FInteractionSpotClaimToken ClaimSpot(FInteractionSpotHandle Spot, AGothicCharacterState* User, FGameplayTag Action);
    
    UFUNCTION(BlueprintPure)
    bool CanPawnClaimSpotAndHasAbilityForAction(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const;
    
    UFUNCTION(BlueprintPure)
    bool CanPawnClaimSpot(FInteractionSpotHandle Spot, const AGothicCharacterState* PotentialUser, FGameplayTag Action) const;
    
    UFUNCTION(BlueprintCallable)
    FInteractionSpotHandle AddSpot(const FInteractionSpot& Spot);
    
};

