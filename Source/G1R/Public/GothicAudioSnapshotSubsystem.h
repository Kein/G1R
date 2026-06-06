#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GothicAudioSnapshotSubsystem.generated.h"

class APhysicsVolume;
class UFMODEvent;
class UGothicAudioComponent;

UCLASS()
class G1R_API UGothicAudioSnapshotSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<APhysicsVolume*> WaterVolumes;
    
    UPROPERTY(Instanced)
    UGothicAudioComponent* UnderWaterAmbientAudioComponent;
    
    UPROPERTY()
    UFMODEvent* UnderwaterAmbientEvent;
    
public:
    UGothicAudioSnapshotSubsystem();

};

