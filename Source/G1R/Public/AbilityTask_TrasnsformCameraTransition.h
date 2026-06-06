#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_TrasnsformCameraTransition.generated.h"

class AGothicCharacter;
class APawn;
class APlayerController;
class UAbilityTask_TrasnsformCameraTransition;
class UCameraDefinition;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_TrasnsformCameraTransition : public UAbilityTaskBase {
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
    
public:
    UAbilityTask_TrasnsformCameraTransition();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TrasnsformCameraTransition* TransformCameraTransition(UGameplayAbility* OwningAbility, FName TaskInstanceName, AGothicCharacter* newCharacter, AGothicCharacter* oldCharacter, APlayerController* PlayerController, bool isReverse, float taskDuration);
    
private:
    UFUNCTION()
    void OnPlayerControllerPosses(APawn* OldPawn, APawn* NewPawn);
    
};

