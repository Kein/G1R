#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "AbilityTask_UpdateRotationToTargetMeleeMagnet.generated.h"

class UAbilityTask_UpdateRotationToTargetMeleeMagnet;
class UDataModule_Locomotion;
class UGameplayAbility;
class UGothicMovementComponent;
class USceneComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateRotationToTargetMeleeMagnet : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TWeakObjectPtr<USceneComponent> m_MagnetTarget;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MoveComp;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
public:
    UAbilityTask_UpdateRotationToTargetMeleeMagnet();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateRotationToTargetMeleeMagnet* CreateUpdateRotationToTargetMeleeMagnet(UGameplayAbility* OwningAbility, FName TaskInstanceName, USceneComponent* TargetComp, float timeAvailable, float limitSpeed, FVector DamagePoint_Local);
    
};

