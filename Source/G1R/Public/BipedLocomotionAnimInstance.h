#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "LocomotionAnimInstance.h"
#include "BipedLocomotionAnimInstance.generated.h"

class UAnimSequence;
class UAnimSequenceBase;
class UBlendSpace;
class UDataModule_Combat;
class UFggto;

UCLASS(NonTransient)
class G1R_API UBipedLocomotionAnimInstance : public ULocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentMidIdleTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TimeInMidIdle;
    
    UPROPERTY(BlueprintReadOnly)
    float m_ApplySpineCorrection;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponHoldersOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* WeaponOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsSayingASentence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsInDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RandomLoopIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UBlendSpace*> m_WalkLoopsBS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFggto* GTO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReloadGTOData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float UpperTeethOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EyesOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TeethOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_CurrentMood;
    
    UPROPERTY()
    UDataModule_Combat* m_DataModule_Combat;
    
    UBipedLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool ShouldApplySpineCorrection();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_Swimming_Quick_Stop(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_StopTransition();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_Roll_To_Idle(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_Quick_Stop(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_N_Stop_R(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_N_Stop_L(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_Land_To_Idle(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_ClimbEnd(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimNotify_CLF_Stop(UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintPure)
    float GetSpineCorrectionTarget(bool ShowDebug);
    
};

