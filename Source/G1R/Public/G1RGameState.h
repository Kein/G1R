#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "G1RGameState.generated.h"

class AActor;
class AGothicPlayerState;
class AGothicSingletonManager;
class AGothicWorldActor;
class UG1RGameQueryComponent;
class UGothicLockConfig;
class UInteractiveObjectDefinition;
class UItemDefinition;
class UObject;
class USpawnMeshes_AIAgent;
class UTraderConfig;
class UTraderManager;
class UWorld;
class UWorldDefinition;

UCLASS()
class G1R_API AG1RGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TArray<AGothicSingletonManager*> m_GameplayManagers;
    
    UPROPERTY(Instanced)
    UG1RGameQueryComponent* m_QueryComponent;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicWorldActor> m_GothicWorldActor;
    
    UPROPERTY(Instanced, Transient)
    UTraderManager* m_TraderManager;
    
public:
    UPROPERTY(Replicated, Transient)
    TSubclassOf<UWorldDefinition> m_WorldDefinition;
    
private:
    UPROPERTY(Replicated)
    TArray<FName> m_DoorsOpen;
    
    UPROPERTY(Replicated)
    TArray<FName> m_DoorsClosed;
    
    UPROPERTY(Replicated)
    TArray<FName> m_GenericDataName;
    
    UPROPERTY(Replicated)
    TArray<float> m_GenericDataFloat;
    
    UPROPERTY(Replicated)
    TArray<FName> m_TempGenericDataName;
    
    UPROPERTY(Replicated)
    TArray<float> m_TempGenericDataFloat;
    
public:
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<FString, TSubclassOf<UItemDefinition>> m_ItemMapClasses;
    
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<FString, TSubclassOf<UTraderConfig>> m_TraderMapClasses;
    
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<FString, TSubclassOf<UGothicLockConfig>> m_LockMapClasses;
    
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<FGameplayTag, TSubclassOf<USpawnMeshes_AIAgent>> m_NpcSkelMeshesMapClasses;
    
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<FString, TSubclassOf<UInteractiveObjectDefinition>> m_InteractiveMapClasses;
    
    UPROPERTY(Transient, BlueprintReadOnly)
    TArray<FGameplayTagContainer> m_MagicCircles;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<int32> m_TorchIds;
    
public:
    AG1RGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Reliable, Server)
    void Server_SetDoorOpenState(bool IsOpen, const FName& doorConfigName);
    
    UFUNCTION(Reliable, Server)
    void Server_SaveFloatData(const FName& DataName, float Data, bool isTemp);
    
    UFUNCTION(Reliable, Server)
    void Server_GiveXP(AActor* xpInstigator, AActor* xpObjective, const FGameplayTag& bountyType);
    
    UFUNCTION(BlueprintCallable)
    static void SaveWorldFloatData(const UWorld* World, const FName& DataName, float Data);
    
    UFUNCTION(BlueprintCallable)
    void SaveFloatData(const FName& DataName, float Data);
    
    UFUNCTION(BlueprintCallable)
    static bool IsDoorOpenWorld(const UWorld* World, const FName& doorConfigName);
    
    UFUNCTION()
    bool IsDoorOpen(const FName& doorConfigName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GlobalSaveFloatData(const UObject* WorldContextObject, const FName& DataName, float Data);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GlobalGetFloatData(const UObject* WorldContextObject, const FName& DataName, float& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool GetWorldFloatData(const UWorld* World, const FName& DataName, float& Data);
    
    UFUNCTION(BlueprintCallable)
    static UWorldDefinition* GetWorldDefinition(const UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTorchId();
    
    UFUNCTION(BlueprintCallable)
    bool GetFloatData(const FName& DataName, float& Data);
    
    UFUNCTION(BlueprintCallable)
    TArray<AGothicPlayerState*> GetAllPlayers();
    
    UFUNCTION()
    static bool DoesDoorExist(const UWorld* World, const FName& doorConfigName);
    
    UFUNCTION(BlueprintCallable)
    static bool CanDoorBeOpenedWorld(AActor* doorActor);
    
    UFUNCTION()
    bool CanDoorBeOpened(AActor* doorActor);
    
};

