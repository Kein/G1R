#pragma once
#include "CoreMinimal.h"
#include "LandingMontages.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FLandingMontages {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<float, TSoftObjectPtr<UAnimMontage>> Montages;
    
    G1R_API FLandingMontages();
};

