#pragma once
#include "CoreMinimal.h"
#include "InGameTime.h"
#include "Templates/SubclassOf.h"
#include "ItemDefinition_LTMData.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct FItemDefinition_LTMData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UItemDefinition>, FInGameTime> m_LastUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<UItemDefinition>, FInGameTime> m_LastInspections;
    
    G1R_API FItemDefinition_LTMData();
};

