#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIItemActionScoringEntryGroup.h"
#include "ScoredItemAction.h"
#include "AIItemActionScoringEntryManager.generated.h"

class UAIItemActionScoringEntry;

UCLASS(BlueprintType, Within=GameplayAbility_AI)
class UAIItemActionScoringEntryManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FAIItemActionScoringEntryGroup> ItemScoringEntryGroups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSet<FGameplayTag> ItemScoringEntryGroupTags;
    
    UAIItemActionScoringEntryManager();

    UFUNCTION(BlueprintCallable)
    void UpdateAvailableItems();
    
    UFUNCTION(BlueprintPure)
    TArray<FScoredItemAction> GetUsableScoredItemActionsInInventory(FGameplayTagContainer RequiredTags, const bool bForceUpdate) const;
    
    UFUNCTION(BlueprintPure)
    void CalculateScoreOfItemAction(FScoredItemAction& ScoredItemAction, FGameplayTagContainer RequiredTags) const;
    
    UFUNCTION(BlueprintCallable)
    void Add(UAIItemActionScoringEntry* Entry);
    
};

