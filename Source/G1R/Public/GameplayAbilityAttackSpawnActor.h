#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilityAttackBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityAttackSpawnActor.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_PlayMontage_Extended;
class UGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityAttackSpawnActor : public UGameplayAbilityAttackBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
public:
    UGameplayAbilityAttackSpawnActor();

protected:
    UFUNCTION(Reliable, Server)
    void ServerSpawnActor();
    
    UFUNCTION(BlueprintCallable)
    FActiveGameplayEffectHandle QuickApplyGEToTarget(UAbilitySystemComponent* Target, TSubclassOf<UGameplayEffect> EffectClass, float Duration);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnCanActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void OnActorSpawned_Scriptable(AActor* SpawnedActor);
    
    UFUNCTION(BlueprintNativeEvent)
    FRotator GetSpawnRotation_Scriptable();
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetSpawnPosition_Scriptable();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanSpawnActor_Scriptable() const;
    
};

