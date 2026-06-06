#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGenericTaskResult.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityInteractFreePoint.generated.h"

class UAbilityTaskGeneric;
class UAbilityTask_InteractionSpot;
class UAbilityTask_WarpTransform;

UCLASS()
class G1R_API UGameplayAbilityInteractFreePoint : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_InteractionSpot* RootInteractionTask;
    
    UPROPERTY()
    UAbilityTask_WarpTransform* RotateTask;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ActionFilter;
    
    UPROPERTY(Transient)
    bool bEndRequested;
    
public:
    UGameplayAbilityInteractFreePoint();

protected:
    UFUNCTION()
    void OnRequestEndQuick();
    
    UFUNCTION()
    void OnRequestEndNormal();
    
    UFUNCTION()
    void OnInteractionTaskEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
    UFUNCTION()
    void EndAbilityFromTaskEnd(UAbilityTaskGeneric* Task, EGenericTaskResult Result);
    
};

