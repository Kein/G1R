#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGenericTaskResult.h"
#include "EInteractionSpotEntryDirection.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityBlockingInteraction.generated.h"

class UAbilityTaskGeneric;
class UAbilityTask_EndEquip;
class UAbilityTask_MoveIntoPositionForInteraction;
class UAbilityTask_WarpTransform;

UCLASS(Abstract)
class G1R_API UGameplayAbilityBlockingInteraction : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_WarpTransform* m_RotateTask;
    
    UPROPERTY()
    bool m_UpdateRotation;
    
    UPROPERTY()
    FRotator m_DesiredRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseCameraTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UseCameraTeleport;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_MoveToLocation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_StartBeforeRotation;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_ApplyCooldown;
    
    UPROPERTY()
    UAbilityTask_MoveIntoPositionForInteraction* m_TaskMoveTo;
    
    UPROPERTY()
    TArray<FName> m_AnchorTags;
    
    UPROPERTY()
    EInteractionSpotEntryDirection m_InteractEntryDirection;
    
    UPROPERTY()
    UAbilityTask_EndEquip* m_UnEquip;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UnEquipBefore;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_InstantUnEquip;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_UnEquipIgnoreDrop;
    
public:
    UGameplayAbilityBlockingInteraction();

protected:
    UFUNCTION()
    void SetUnEquipTask();
    
    UFUNCTION()
    void SetMoveToTask();
    
    UFUNCTION(BlueprintCallable)
    void OnUnEquipEnded_Internal();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveToTaskFinishMove();
    
    UFUNCTION(BlueprintCallable)
    void OnMoveToTaskEnded(UAbilityTaskGeneric* MoveToTask, EGenericTaskResult Result);
    
    UFUNCTION()
    void HandleOnResetState();
    
};

