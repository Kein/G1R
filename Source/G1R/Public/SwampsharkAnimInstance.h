#pragma once
#include "CoreMinimal.h"
#include "ESlimeManagerActions.h"
#include "ESlimeName.h"
#include "FloatByWalkSpeed.h"
#include "LocomotionAnimInstance.h"
#include "SwampsharkAnimInstance.generated.h"

class UCurveFloat;
class USkeletalMeshComponent;

UCLASS(NonTransient)
class G1R_API USwampsharkAnimInstance : public ULocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_bodyOscillationTimelineCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_bodyTurningTimelineCurve;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_smoothTurningTimelineCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatByWalkSpeed m_groundedBodyOscillationTLPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FFloatByWalkSpeed m_standingBodyOscillationTLPlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float m_currentBodyOscillation;
    
    UPROPERTY(BlueprintReadOnly)
    float m_currentBodyTurning;
    
    UPROPERTY(BlueprintReadOnly)
    float m_currentSmoothTurning;
    
    UPROPERTY(BlueprintReadOnly)
    float m_prevControllerYaw;
    
    UPROPERTY(BlueprintReadOnly)
    float m_prevDeltaYaw;
    
public:
    USwampsharkAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SlimeAction(USkeletalMeshComponent* MeshComp, ESlimeManagerActions NewSlimeAction, ESlimeName SlimeName);
    
    UFUNCTION()
    void SetCurrentSmoothTurning(float currentSmoothTurning);
    
    UFUNCTION()
    void SetCurrentBodyTurning(float currentBodyTurning);
    
    UFUNCTION()
    void SetCurrentBodyOscillation(float currentBodyOscillation);
    
};

