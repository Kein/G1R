#pragma once
#include "CoreMinimal.h"
#include "Translate.generated.h"

USTRUCT()
struct GATESHADOW_API FTranslate {
    GENERATED_BODY()
public:
    UPROPERTY()
    double tX;
    
    UPROPERTY()
    double tY;
    
    UPROPERTY()
    double tZ;
    
    FTranslate();
};

