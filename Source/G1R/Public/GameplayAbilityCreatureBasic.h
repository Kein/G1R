#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "AttributeSet.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbilityCreatureBasic.generated.h"

class AActor;
class AGothicCharacter;

UCLASS()
class G1R_API UGameplayAbilityCreatureBasic : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
    UGameplayAbilityCreatureBasic();

    UFUNCTION(BlueprintPure)
    void UnregisterGameplayAttributeEvent(const FGameplayAttribute& Attribute) const;
    
    UFUNCTION(BlueprintCallable)
    bool RegisterGameplayAttributeEvent(const FGameplayAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAttributeValueChanged_Scriptable(const FGameplayAttribute& Attribute, float OldValue, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorSpawnedServer_Scriptable(AActor* ActorSpawned);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbilityBeforeAssetPreload_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FRotator GetSpawnRotationServer_Scriptable(AGothicCharacter* Owner, UClass* actorToSpawnClass) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector GetSpawnPositionServer_Scriptable(AGothicCharacter* Owner, UClass* actorToSpawnClass) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UClass* GetSpawnActorClassServer_Scriptable() const;
    
    UFUNCTION(BlueprintCallable)
    void DoSpawnStateActorServer();
    
    UFUNCTION(BlueprintCallable)
    void ClearAbility();
    
};

