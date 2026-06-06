#pragma once
#include "CoreMinimal.h"
#include "LockOneConnection.generated.h"

USTRUCT()
struct G1R_API FLockOneConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_Id;
    
    UPROPERTY()
    int32 m_Direction;
    
    FLockOneConnection();
};

