#pragma once
#include "CoreMinimal.h"
#include "EWorldPointElementType.h"
#include "WorldPointElement.generated.h"

USTRUCT()
struct FWorldPointElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Id;
    
    UPROPERTY()
    EWorldPointElementType m_Type;
    
    G1R_API FWorldPointElement();
};

