#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameStateSubsystem.h"
#include "ECinematicState.h"
#include "PlayerList.h"
#include "Templates/SubclassOf.h"
#include "GothicCinematicManagerSubsystem.generated.h"

class AActor;
class ACharacter;
class AController;
class AGameModeBase;
class AGothicCharacter;
class AGothicCharacterState;
class AGothicNPCState;
class AGothicPlayerState;
class ALevelSequenceActor;
class AMultiplayerGameMode;
class UActorComponent;
class UAnimInstance;
class UGothicCinematic;
class ULevelSequencePlayer;

UCLASS(Abstract, BlueprintType)
class G1R_API UGothicCinematicManagerSubsystem : public UGameStateSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AMultiplayerGameMode* m_GameMode;
    
    UPROPERTY(Replicated)
    ECinematicState m_RequestCinematicState;
    
    UPROPERTY(Replicated)
    ECinematicState m_CurrentCinematicState;
    
    UPROPERTY(Replicated)
    TSubclassOf<UGothicCinematic> m_CinematicClass;
    
    UPROPERTY(Replicated)
    UGothicCinematic* m_Cinematic;
    
    UPROPERTY()
    int32 m_PlayersCount;
    
    UPROPERTY()
    uint8 StatePlayerCount;
    
    UPROPERTY()
    FPlayerList m_PlayerList;
    
    UPROPERTY()
    TArray<int32> m_PlayerSkipRequests;
    
    UPROPERTY()
    ALevelSequenceActor* m_LevelSequenceActor;
    
    UPROPERTY()
    ULevelSequencePlayer* m_LevelSequencePlayer;
    
    UPROPERTY()
    TArray<FName> m_ActorsToBind;
    
    UPROPERTY()
    TMap<ACharacter*, FName> m_BoundActors;
    
    UPROPERTY()
    TMap<FName, FName> m_UnBoundActors;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGothicCinematic> m_StartupCinematicClass;
    
    UPROPERTY()
    TSubclassOf<UGothicCinematic> m_SelectedCinematicClass;
    
private:
    UPROPERTY()
    TArray<TSoftClassPtr<UAnimInstance>> m_CinematicAnimInstanceClassArray;
    
    UPROPERTY()
    TMap<FName, TSoftClassPtr<UAnimInstance>> m_CinematicAnimInstanceClassMap;
    
    UPROPERTY(Instanced)
    TArray<UActorComponent*> m_ComponentsToReactivate;
    
    UPROPERTY()
    bool m_AllowTick;
    
public:
    UGothicCinematicManagerSubsystem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UnregisterActor(AGothicPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void StopCinematicServer();
    
    UFUNCTION(Reliable, Server)
    void Server_OnSkipCutsceneRequest(int32 PlayerId);
    
    UFUNCTION(Reliable, Server)
    void Server_OnForceStartCinematic(TSubclassOf<UGothicCinematic> CinematicClass);
    
    UFUNCTION(Reliable, Server)
    void Server_OnFadeInFinished();
    
    UFUNCTION(Reliable, Server)
    void Server_OnEndSetupSequenceFinished();
    
    UFUNCTION(Reliable, Server)
    void Server_OnActorUnrequestCinematic(const int32 PlayerId);
    
    UFUNCTION(Reliable, Server)
    void Server_OnActorRequestCinematic(int32 PlayerId, TSubclassOf<UGothicCinematic> CinematicClass);
    
    UFUNCTION(Reliable, Server)
    void Server_OnActorBindingFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterActorReady(int32 PartySlotIndex, TSubclassOf<UGothicCinematic> LevelSequence);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterActor(AGothicCharacterState* PlayerState, TSubclassOf<UGothicCinematic> LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void PlayCinematicServer();
    
    UFUNCTION()
    void OnPlayerLogOut(AGameModeBase* GameMode, AController* PlayerController);
    
    UFUNCTION()
    void OnNPCSpawned(AGothicNPCState* CharacterState, AGothicCharacter* Character);
    
    UFUNCTION()
    void OnNPCDestroyed(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
private:
    UFUNCTION()
    void OnGameMapLoadedComplete(bool isNewGame);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetupSequenceEnd();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetupSequence();
    
    UFUNCTION(BlueprintCallable)
    void InitializeCinematicServer();
    
    UFUNCTION(BlueprintCallable)
    void ForceStartCinematic(TSubclassOf<UGothicCinematic> LevelSequence);
    
    UFUNCTION(BlueprintCallable)
    void AddCinematicAnimInstanceClass(TSoftClassPtr<UAnimInstance> AnimClass);
    
};

