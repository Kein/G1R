#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TurnOnSpotConfig.h"
#include "TurnOnSpotConfig_Melee.generated.h"

class UTurnOnSpotAssetConfig;

UCLASS(Abstract, EditInlineNew)
class UTurnOnSpotConfig_Melee : public UTurnOnSpotConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL90_IA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR90_IA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL180_IA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR180_IA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL90_IB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR90_IB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPL180_IB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTurnOnSpotAssetConfig> m_TIPR180_IB;
    
public:
    UTurnOnSpotConfig_Melee();

};

