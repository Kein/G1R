#pragma once
#include "CoreMinimal.h"
#include "IndexedMirrorPair.h"
#include "AnimMirroringData.generated.h"

USTRUCT()
struct FAnimMirroringData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FIndexedMirrorPair> IndexedMirrorPairs;
    
    MOTIONSYMPHONY_API FAnimMirroringData();
};

