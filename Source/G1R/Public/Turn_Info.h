#pragma once
#include "CoreMinimal.h"
#include "Turn_Info.generated.h"

USTRUCT()
struct FTurn_Info {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_RotationAmount;
    
    G1R_API FTurn_Info();
};

