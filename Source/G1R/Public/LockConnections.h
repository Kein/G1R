#pragma once
#include "CoreMinimal.h"
#include "LockConnections.generated.h"

USTRUCT()
struct G1R_API FLockConnections {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<int32> m_Ids;
    
    UPROPERTY()
    TArray<int32> m_Direction;
    
    FLockConnections();
};

