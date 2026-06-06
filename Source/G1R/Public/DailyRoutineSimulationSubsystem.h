#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "DailyRoutineInteractionAnimation.h"
#include "DailyRoutineSimulatedCharacterHandle.h"
#include "DailyRoutineSimulationSubsystem.generated.h"

class AActor;
class UPointLightComponent;

UCLASS(Config=Engine)
class G1R_API UDailyRoutineSimulationSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float ObserverMovementSinceLastTick;
    
    UPROPERTY(Config)
    float MaxDistanceConsideredForSpawning;
    
    UPROPERTY()
    AActor* LightContainerActor;
    
    UPROPERTY(Instanced)
    TMap<FDailyRoutineSimulatedCharacterHandle, UPointLightComponent*> LightsBySimulatedCharacters;
    
    UPROPERTY()
    TArray<AActor*> ObserverActors;
    
    UPROPERTY()
    TMap<AActor*, FTransform> ObserverActorsLastKnownTransforms;
    
    UPROPERTY()
    TArray<FTransform> ObserverActorTransforms;
    
    UPROPERTY()
    TMap<uint32, FDailyRoutineInteractionAnimation> InteractionAnimsByHash;
    
public:
    UDailyRoutineSimulationSubsystem();

    virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UDailyRoutineSimulationSubsystem, STATGROUP_Tickables); }
};

