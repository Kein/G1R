#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ItemActionHandler.h"
#include "AIItemActionScoringEntry.generated.h"

UCLASS(Abstract, Blueprintable)
class G1R_API UAIItemActionScoringEntry : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag GroupTag;
    
    UPROPERTY(EditDefaultsOnly)
    FString Description;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsMultiplier;
    
    UAIItemActionScoringEntry();

    UFUNCTION(BlueprintNativeEvent)
    bool VetoActionUsage(const FItemActionHandler& ItemActionHandler) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsEntryRelevantToItemAction(const FItemActionHandler& ItemActionHandler) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool DoesEntryApplyToCurrentSituation() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float CalculateScore(const FItemActionHandler& ItemActionHandler) const;
    
};

