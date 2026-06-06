#pragma once
#include "CoreMinimal.h"
#include "MainPlayerSaveGameData.generated.h"

USTRUCT()
struct FMainPlayerSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_RandomNUmber;
    
    G1R_API FMainPlayerSaveGameData();
};

