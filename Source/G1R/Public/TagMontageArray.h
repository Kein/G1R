#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagMontageArray.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FTagMontageArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimMontage>> Montages;
    
    G1R_API FTagMontageArray();
};

