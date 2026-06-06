#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MiningSpotConfig.generated.h"

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UMiningSpotConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MiningDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_HighOre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AmountAtHighOre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AmountAtLowOre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_VisualMaxOre;
    
    UMiningSpotConfig();

};

