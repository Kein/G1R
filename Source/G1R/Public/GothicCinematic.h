#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LevelSequenceCameraSettings.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "AbilityTaskCameraFadeSetup.h"
#include "ClockTime.h"
#include "OverrideTimeByRange.h"
#include "GothicCinematic.generated.h"

class UDataLayerAsset;
class ULevelSequence;

UCLASS(Abstract, Blueprintable)
class G1R_API UGothicCinematic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    ULevelSequence* LevelSequence;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<ULevelSequence> LevelSequenceAsset;
    
    UPROPERTY(EditAnywhere)
    FName TeleportToCinematicWP;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FOverrideTimeByRange> OverrideTimeByRange;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UDataLayerAsset>> CinematicDataLayers;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> PreloadStoryDataLayers;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere)
    FLevelSequenceCameraSettings CameraSettings;
    
    UPROPERTY(EditAnywhere)
    FAbilityTaskCameraFadeSetup FadeInSetup;
    
    UPROPERTY(EditAnywhere)
    FAbilityTaskCameraFadeSetup FadeOutSetup;
    
    UPROPERTY(EditAnywhere)
    FClockTime SavedTime;
    
    UGothicCinematic();

    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupBeforeSequence();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupAfterSequence();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_SetupAfterActorsReady();
    
};

