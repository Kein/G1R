#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "GothicBasicVerbMessage.h"
#include "GothicFXInstanceHandle.h"
#include "GothicGASActor.h"
#include "ReplicatedStringMap.h"
#include "ConcertStageManager.generated.h"

class AGothicAmbientSoundActor;
class ALevelSequenceActor;
class APlayerController;

UCLASS()
class G1R_API AConcertStageManager : public AGothicGASActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AGothicAmbientSoundActor* m_AudioTrack;
    
    UPROPERTY()
    bool m_WasPaused;
    
    UPROPERTY()
    bool m_ActivateSequenceOnLoad;
    
    UPROPERTY()
    bool m_ActivateAudioTrackOnLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsAudioTrackSyncEnabled;
    
    UPROPERTY()
    bool m_IsPlayerOutOfRange;
    
    UPROPERTY()
    APlayerController* m_PC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ALevelSequenceActor* m_SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FQualifiedFrameTime m_SequenceFrameTime;
    
    UPROPERTY()
    int32 m_AudioTrackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_MaxUnsyncFrames;
    
    UPROPERTY()
    FGothicFXInstanceHandle m_SFXTrackHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_SFXTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_AudioStartEventFrame;
    
private:
    UPROPERTY()
    FGameplayMessageListenerHandle m_PreSaveListenerHandle;
    
    UPROPERTY()
    FGameplayMessageListenerHandle m_PostSaveListenerHandle;
    
public:
    AConcertStageManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ResetAll_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAll();
    
protected:
    UFUNCTION()
    void PlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION()
    void OnSequenceStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceFinished_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRecoveredSavedData_Scriptable(const FReplicatedStringMap& Data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFillSaveData_Scriptable(FReplicatedStringMap& Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioTrackStart();
    
    UFUNCTION(BlueprintCallable)
    void OnAudioTrackEnds();
    
    UFUNCTION(BlueprintCallable)
    bool IsSequenceStarted();
    
    UFUNCTION(BlueprintCallable)
    bool IsSequenceCompleted();
    
    UFUNCTION(BlueprintCallable)
    void ForceSaveSequenceFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPreSaveMessage(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPostSaveMessage(FGameplayTag Channel, const FGothicBasicVerbMessage& Payload);
    
};

