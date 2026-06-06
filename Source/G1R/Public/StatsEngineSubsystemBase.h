#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "StatsSubsystem.h"
#include "StatsEngineSubsystemBase.generated.h"

class AActor;
class IStatCalculator;
class UStatCalculator;
class IStatsContainer;
class UStatsContainer;
class UItemStatsDefinitionContainer;

UCLASS()
class G1R_API UStatsEngineSubsystemBase : public UEngineSubsystem, public IStatsSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<AActor*, TScriptInterface<IStatsContainer>> m_Stats;
    
    UPROPERTY()
    TMap<FName, TScriptInterface<IStatCalculator>> m_StatsCalculators;
    
    UPROPERTY()
    TMap<FName, UItemStatsDefinitionContainer*> m_RegisteredItemStats;
    
public:
    UStatsEngineSubsystemBase();


    // Fix for true pure virtual functions not being implemented
};

