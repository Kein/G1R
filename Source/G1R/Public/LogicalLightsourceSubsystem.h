#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LogicalLightReceiverState.h"
#include "LogicalLightsourceSubsystem.generated.h"

class UObject;

UCLASS(Config=Game)
class G1R_API ULogicalLightsourceSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    int32 AllowedTraceAgeFrames;
    
    UPROPERTY()
    TMap<UObject*, FLogicalLightReceiverState> ActiveReceivers;
    
public:
    ULogicalLightsourceSubsystem();
    
    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(ULogicalLightsourceSubsystem, STATGROUP_Tickables); }
};

