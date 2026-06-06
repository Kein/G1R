#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotHandle.h"
#include "TerritorySubsystem.generated.h"

class AGothicCharacterState;
class UAbilitySystemComponent;
class UAreaTagRegionTrait;
class UTerritoryConfig;

UCLASS(BlueprintType)
class G1R_API UTerritorySubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float FarEnoughSpotDistance;
    
    UPROPERTY(BlueprintReadWrite)
    float CharacterBoundingBoxExtent;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxHeightDifferenceToSpot;
    
protected:
    UPROPERTY(Instanced)
    TMap<FGameplayTag, UAreaTagRegionTrait*> AreaTagToAreaTraitMap;
    
    UPROPERTY()
    float SpotCloserToAttackerRelevanceFactor;
    
public:
    UTerritorySubsystem();

    UFUNCTION(BlueprintPure)
    bool TryGetRandomNavigablePointWithinTerritory(const AGothicCharacterState* State, const UTerritoryConfig* Territory, FVector& OutPoint) const;
    
    UFUNCTION(BlueprintCallable)
    void SetDebugNeverHaveCharacterInCombatRadius(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAlwaysReturnBeingInTerritory(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugAlwaysHaveCharacterInCombatRadius(bool bValue);
    
    UFUNCTION(BlueprintPure)
    bool IsCharacterStateWithinTerritory(const AGothicCharacterState* State, const UTerritoryConfig* Territory) const;
    
    UFUNCTION(BlueprintPure)
    UTerritoryConfig* GetTerritoryByAssociatedAreaTag(FGameplayTag AreaTag, const UAbilitySystemComponent* ASC) const;
    
    UFUNCTION(BlueprintPure)
    UTerritoryConfig* GetTerritoryByAreaTagContainer(const FGameplayTagContainer& AreaTags, const UAbilitySystemComponent* ASC) const;
    
    UFUNCTION(BlueprintPure)
    UTerritoryConfig* GetTerritoryByAdditionalAreaTags(FGameplayTag AreaTag, const UAbilitySystemComponent* ASC) const;
    
    UFUNCTION(BlueprintPure)
    FInteractionSpotHandle GetDisengageSpotInTerritory(const UTerritoryConfig* Territory, AGothicCharacterState* State, AGothicCharacterState* AttackerState, const FGameplayTagContainer& ValidSpotActionTags, const int32 CheckSpotAmount) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebugNeverHaveCharacterInCombatRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebugAlwaysReturnBeingInTerritory() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDebugAlwaysHaveCharacterInCombatRadius() const;
    
};

