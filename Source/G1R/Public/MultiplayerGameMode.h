#pragma once
#include "CoreMinimal.h"
#include "GothicGameMode.h"
#include "OnlineGameSession.h"
#include "OnlineSessionFindResult.h"
#include "MultiplayerGameMode.generated.h"

class APlayerController;
class UWorld;

UCLASS(MinimalAPI, NonTransient)
class AMultiplayerGameMode : public AGothicGameMode, public IOnlineGameSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 MaxNumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName LobbyMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MainMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName GameMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapsPath;
    
private:
    UPROPERTY()
    TArray<APlayerController*> m_PlayerControllers;
    
public:
    AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartGame();
    
    UFUNCTION(BlueprintCallable)
    bool JoinSession(const FString& SessionId);
    
    UFUNCTION(BlueprintPure)
    bool HasLobbyMap() const;
    
    UFUNCTION(BlueprintPure)
    bool HasCurrentSession() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UWorld> GetGameMapSoftPtr() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetFindSessionsStatus() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentSessionIdStr() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FOnlineSessionFindResult> GetAvailableSessions() const;
    
    UFUNCTION(BlueprintCallable)
    void FindSessions();
    
    UFUNCTION(BlueprintCallable)
    void EndSession();
    
    UFUNCTION(BlueprintCallable)
    void DestroySessionAndLeaveGame();
    
    UFUNCTION(BlueprintCallable)
    void CreateSession(bool isLAN);
    

    // Fix for true pure virtual functions not being implemented
};

