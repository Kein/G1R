#pragma once
#include "CoreMinimal.h"
#include "GJoint.generated.h"

USTRUCT()
struct GATESHADOW_API FGJoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    double tX;
    
    UPROPERTY()
    double tY;
    
    UPROPERTY()
    double tZ;
    
    UPROPERTY()
    double rX;
    
    UPROPERTY()
    double rY;
    
    UPROPERTY()
    double rZ;
    
    UPROPERTY()
    double sX;
    
    UPROPERTY()
    double sY;
    
    UPROPERTY()
    double sZ;
    
    FGJoint();
};

