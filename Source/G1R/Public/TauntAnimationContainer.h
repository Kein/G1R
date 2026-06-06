#pragma once
#include "CoreMinimal.h"
#include "TauntAnimationContainer.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FTauntAnimationContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimMontage>> Animations;
    
    G1R_API FTauntAnimationContainer();
};

