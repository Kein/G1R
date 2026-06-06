#pragma once
#include "CoreMinimal.h"
#include "CameraBehaviour.h"
#include "GameplayAbilityMagicBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityUnTransform.generated.h"

class UAbilityTask_PlayMontage_Extended;
class USpawnCharacterCanTransformIntoDefinition;

UCLASS()
class G1R_API UGameplayAbilityUnTransform : public UGameplayAbilityMagicBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpawnCharacterCanTransformIntoDefinition> m_SpawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraBehaviour m_CameraBehaviour;
    
private:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_UnTransformPlayMontageTask;
    
public:
    UGameplayAbilityUnTransform();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnTransformSpellServer_Scriptable();
    
private:
    UFUNCTION()
    void OnUnTransformMontageCompleted();
    
    UFUNCTION()
    void OnHoldFinished();
    
    UFUNCTION()
    void OnHoldCanceled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelSpellServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateSpellServer_Scriptable();
    
};

