#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "VoiceTypeSubset.generated.h"

USTRUCT(BlueprintType)
struct FVoiceTypeSubset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag VoiceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Subset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Layer;
    
    G1R_API FVoiceTypeSubset();
};

