#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_RidingCamTransition_Mount.generated.h"

class AGothicCharacter;
class APawn;
class APlayerController;
class UAbilityTask_RidingCamTransition_Mount;
class UCameraDefinition;
class UGameplayAbility;
class UGothicCameraSpringArmComponent;

UCLASS()
class G1R_API UAbilityTask_RidingCamTransition_Mount : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<APlayerController> m_PlayerController;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_NewCharacter;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_OldCharacter;
    
    UPROPERTY()
    UCameraDefinition* m_NewCameraConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCameraDefinition* m_OldCameraConfig;
    
    UPROPERTY()
    float m_InitialFov;
    
public:
    UAbilityTask_RidingCamTransition_Mount();

protected:
    UFUNCTION()
    void SetCameraConfigWithLerp(UGothicCameraSpringArmComponent* SpringArmComponent, const UCameraDefinition* cameraConfig, float Alpha);
    
public:
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_RidingCamTransition_Mount* RidingCamTransition(UGameplayAbility* OwningAbility, FName TaskInstanceName, AGothicCharacter* newCharacter, AGothicCharacter* oldCharacter, APlayerController* PlayerController, float taskDuration);
    
protected:
    UFUNCTION()
    void OnPlayerControllerPossesScavenger(APawn* OldPawn, APawn* NewPawn);
    
};

