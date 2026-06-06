#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConversationPresetMonologState.h"
#include "Templates/SubclassOf.h"
#include "PresetTransitionEntry.generated.h"

class UConversationCameraPresetBase;

USTRUCT(BlueprintType)
struct FPresetTransitionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UConversationCameraPresetBase> PossibleNextPresetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag TransitionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EConversationPresetMonologState MonologStateValidity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    G1R_API FPresetTransitionEntry();
};

