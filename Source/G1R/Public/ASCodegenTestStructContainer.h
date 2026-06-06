#pragma once
#include "CoreMinimal.h"
#include "ASCodegenTestStruct.h"
#include "ASCodegenTestStructContainer.generated.h"

USTRUCT()
struct FASCodegenTestStructContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    FASCodegenTestStruct A;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    FASCodegenTestStruct B;
    
    G1R_API FASCodegenTestStructContainer();
};

