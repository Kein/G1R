#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FTagMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> Montage;
    
    G1R_API FTagMontage();
};

