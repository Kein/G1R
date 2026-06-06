#pragma once
#include "CoreMinimal.h"
#include "ERiderLocation.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityRide.generated.h"

class AGothicCharacter;
class AGothicPlayerControllerBase;
class AGothicPlayerState;
class APawn;
class APlayerState;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_SmoothPositionToSaddle;
class UAbilityTask_SmoothUnmounting;
class UAbilityTask_UpdateTraverse;
class UAnimMontage;
class UCharacterMovementComponent;
class UDataModule_Locomotion;
class UGothicAbilitySystemComponent;
class UGothicMountComponent;
class UGothicRiderComponent;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API UGameplayAbilityRide : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_SwimmingMountMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_MountMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_TorchMountMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_DisMountMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_TorchDisMountMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ERiderLocation, TSoftObjectPtr<UAnimMontage>> m_SwimmingDisMountMontages;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_riderCharacter;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UCharacterMovementComponent> m_MountMovementComponent;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGothicAbilitySystemComponent> m_MountAbilitySystemComponent;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicPlayerControllerBase> m_PlayerController;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicPlayerState> m_PlayerState;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGothicMountComponent> m_MountComponent;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGothicRiderComponent> m_RiderComponent;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USpawnAIAgentDefinition> m_MountClass;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY()
    UAbilityTask_UpdateTraverse* m_UpdateTraverseTask;
    
    UPROPERTY()
    UAbilityTask_SmoothPositionToSaddle* m_SmoothPositionToSaddleTask;
    
    UPROPERTY()
    UAbilityTask_SmoothUnmounting* m_SmoothPitchToZeroTask;
    
public:
    UGameplayAbilityRide();

protected:
    UFUNCTION()
    void UnFixCharacterFromSaddle();
    
    UFUNCTION()
    void StartUnmounting(ERiderLocation UnmountLocation);
    
    UFUNCTION()
    void PlayMountingMontage();
    
    UFUNCTION()
    void OnMountPawnSet(APlayerState* PlayerState, APawn* NewPawn, APawn* OldPawn);
    
    UFUNCTION()
    void OnMountInterrumped();
    
    UFUNCTION()
    void OnMountingCompleted();
    
public:
    UFUNCTION()
    void OnMountBreakArmorMontagePlayed(UAnimMontage* Montage);
    
protected:
    UFUNCTION()
    void OnDismountInterrumped();
    
    UFUNCTION()
    void OnDismountFinished();
    
public:
    UFUNCTION()
    void OnBreakSuperArmor();
    
};

