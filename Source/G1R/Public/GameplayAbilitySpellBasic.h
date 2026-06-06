#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityMagicBase.h"
#include "GameplayAbilitySpellBasic.generated.h"

class AActor;
class AGothicCharacter;

UCLASS()
class G1R_API UGameplayAbilitySpellBasic : public UGameplayAbilityMagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESpawnActorCollisionHandlingMethod m_SpawnCollisionHandlingOverride;
    
public:
    UGameplayAbilitySpellBasic();

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnSpellServer();
    
    UFUNCTION(BlueprintCallable)
    void SetRuneAsSpellItem(AActor* Actor);
    
    UFUNCTION(Reliable, Server)
    void Server_InputReleased_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLaunchSpellMontageInterrupted();
    
    UFUNCTION()
    void OnLaunchSpellMontageCompleted();
    
    UFUNCTION()
    void OnLaunchSpellMontageCancelled();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSpellServer_Scriptable();
    
public:
    UFUNCTION()
    void OnCustomLaunchSpellMontageInterrupted();
    
    UFUNCTION()
    void OnCustomLaunchSpellMontageCompleted();
    
    UFUNCTION()
    void OnCustomLaunchSpellMontageCancelled();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorSpawnedServer_Scriptable(AActor* ActorSpawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateSpellServer_Scriptable();
    
    UFUNCTION()
    void OnActivateAbilitySyncEnd();
    
    UFUNCTION(BlueprintCallable)
    void NotifySpellCategory();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FRotator GetSpawnRotationServer_Scriptable(AGothicCharacter* Owner, UClass* actorToSpawnClass) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    FVector GetSpawnPositionServer_Scriptable(AGothicCharacter* Owner, UClass* actorToSpawnClass) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    UClass* GetSpawnActorClassServer_Scriptable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoSpellBehaviour_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoOnActivateAbilitySyncEnd_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void DoEndSpellAction();
    
    UFUNCTION(Client, Reliable)
    void Client_StopAllMagicAbilitiesMontages();
    
    UFUNCTION(Client, Reliable)
    void Client_PlayFailLaunchMontage();
    
};

