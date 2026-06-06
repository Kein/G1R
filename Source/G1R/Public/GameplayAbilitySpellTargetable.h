#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilitySpellBasic.h"
#include "GameplayAbilitySpellTargetable.generated.h"

class AActor;
class AGameplayAbilityWorldReticle;
class UTargetConfigBase;

UCLASS()
class G1R_API UGameplayAbilitySpellTargetable : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AGameplayAbilityWorldReticle> m_ReticleClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_SpellStateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> m_SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UTargetConfigBase* m_TargetConfig;
    
    UPROPERTY()
    bool m_RequestDoEndSpellAction;
    
public:
    UGameplayAbilitySpellTargetable();

protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnObject(UClass* Actor, FVector position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldEndSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayLaunchSpell_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void PlayEndAbilityMontages();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateSpell_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReleaseTarget_Scriptable(AActor* Entity, AActor* Target);
    
    UFUNCTION()
    void OnReleaseTarget(AActor* Entity, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNewTarget_Scriptable(AActor* NewTarget);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnLaunchSpellAnimNotify_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetVisibleOnServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTargetVisibleOnServer();
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetDefeated();
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetDead();
    
    UFUNCTION()
    void DoOnActivateAbility();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayEndSpellMontage();
    
    UFUNCTION(BlueprintCallable)
    void ClearReleaseTargetDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanDoEndSpellAction_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    void BindTriggerBeginOnTag(FGameplayTag TriggerBeginOnSpellTag);
    
};

