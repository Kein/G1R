#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpellSummon.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpellTransform.generated.h"

class ACharacterCanTransformInto;
class AController;
class AGothicCharacter;
class APawn;
class UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities;
class UAbilityTask_WaitGameplayEvent;
class UAnimMontage;
class UGothicCameraModifierPostProcessSettings;
class USpawnCharacterCanTransformIntoDefinition;

UCLASS()
class G1R_API UGameplayAbilitySpellTransform : public UGameplayAbilitySpellSummon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_UnTransformMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpawnCharacterCanTransformIntoDefinition> m_SpawnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpawnCreatureDistance;
    
private:
    UPROPERTY(Replicated)
    TWeakObjectPtr<ACharacterCanTransformInto> m_NewCharacter;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_WaitingForEndUntransformEventTask;
    
    UPROPERTY()
    TWeakObjectPtr<UAnimMontage> m_UnTransformMontageInternal;
    
    UPROPERTY()
    UAbilityTask_PlayMontageAndWait_MultipleAnimationsForDifferentAbilities* m_UnTransformPlayMontageTask;
    
    UPROPERTY()
    TMap<TWeakObjectPtr<AGothicCharacter>, float> TransformationWitnesses;
    
    UPROPERTY()
    UGothicCameraModifierPostProcessSettings* m_CameraModifier;
    
public:
    UGameplayAbilitySpellTransform();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUnTransformPlayMontageBlendInEnded();
    
    UFUNCTION()
    void OnTransformFinished(FGameplayEventData Payload);
    
    UFUNCTION()
    void OnTransformedCharacterGameplayIsReady();
    
    UFUNCTION()
    void OnSync();
    
    UFUNCTION()
    void OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn);
    
    UFUNCTION()
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayUnTransformMontage();
    
};

