#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "AlkimiaAudioSnapshotSubsystem.generated.h"

class IAudioSnapshotRegion;
class UAudioSnapshotRegion;

UCLASS()
class FMODSTUDIO_API UAlkimiaAudioSnapshotSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TScriptInterface<IAudioSnapshotRegion>> ActiveRegions;
    
    UAlkimiaAudioSnapshotSubsystem();

};

