#pragma once
#include "CoreMinimal.h"
#include "MainPlayerSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FMainPlayerSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RandomNUmber;
    
    G1R_API FMainPlayerSaveGameData();
};

