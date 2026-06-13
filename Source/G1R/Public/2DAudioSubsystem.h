#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "2DAudioSubsystem.generated.h"

class UFMODEvent;
class ULevelSequenceDirector;
class ULevelSequencePlayer;

UCLASS(BlueprintType, Config=Game)
class G1R_API U2DAudioSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UFMODEvent* FMODCutsceneEvent;
    
    UPROPERTY(BlueprintReadOnly)
    UFMODEvent* FMODUIEvent;
    
    UPROPERTY()
    UFMODEvent* CinematicFMODEvent;
    
    UPROPERTY()
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY()
    ULevelSequenceDirector* SequenceDirector;
    
    U2DAudioSubsystem();

    UFUNCTION(BlueprintCallable)
    void PlayOneShot(TSoftObjectPtr<UFMODEvent> SoftEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayChapterJingle(int32 Chapter);
    
    UFUNCTION(BlueprintCallable)
    void PlayBinkAudioTrack(const FString& MovieClip);
    
    UFUNCTION(BlueprintCallable)
    void Play2DAudioFromTextID(FText TextID, UFMODEvent* FMODEvent);
    
    UFUNCTION(BlueprintCallable)
    void Play2DAudioFromCutscene(const FString& MovieClip, ULevelSequenceDirector* Sequence);
    
    UFUNCTION()
    void HandleSequenceStopped();
    
};

