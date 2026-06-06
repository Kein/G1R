#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilityBase_Locomotion.h"
#include "GameplayAbilityPivot.generated.h"

class UAbilityTask_WarpTransform;

UCLASS()
class G1R_API UGameplayAbilityPivot : public UGameplayAbilityBase_Locomotion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_WarpTransform* m_RotateTask;
    
    UPROPERTY()
    bool m_KeepUpdatingRotation;
    
    UPROPERTY()
    FRotator m_DesiredRotation;
    
public:
    UGameplayAbilityPivot();

private:
    UFUNCTION(BlueprintCallable)
    void ResetValues();
    
};

