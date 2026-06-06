#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityCastFishingRod.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;
class UCarryComponent;

UCLASS()
class G1R_API UGameplayAbilityCastFishingRod : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_CastMontage;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UAnimMontage> m_EndMontage;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CastTask;
    
public:
    UGameplayAbilityCastFishingRod();

protected:
    UFUNCTION(Reliable, Server)
    void Server_Fire(const FTransform CameraTransform);
    
    UFUNCTION()
    void OnShoot();
    
    UFUNCTION()
    void OnReleaseAttack();
    
    UFUNCTION()
    void OnPressAttack();
    
};

