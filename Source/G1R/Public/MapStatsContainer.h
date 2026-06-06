#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StatsContainer.h"
#include "MapStatsContainer.generated.h"

class UItemStatsDefinitionContainer;

UCLASS()
class G1R_API UMapStatsContainer : public UObject, public IStatsContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, UItemStatsDefinitionContainer*> m_Stats;
    
public:
    UMapStatsContainer();


    // Fix for true pure virtual functions not being implemented
};

