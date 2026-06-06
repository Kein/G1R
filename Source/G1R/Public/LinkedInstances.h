#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LinkedInstances.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FLinkedInstances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAnimInstance> LinkedAnimInstance;
    
    G1R_API FLinkedInstances();
};

