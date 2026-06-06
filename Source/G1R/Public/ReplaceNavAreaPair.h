#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ReplaceNavAreaPair.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct FReplaceNavAreaPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> NavAreaToReplace;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> NavAreaNew;
    
    G1R_API FReplaceNavAreaPair();
};

