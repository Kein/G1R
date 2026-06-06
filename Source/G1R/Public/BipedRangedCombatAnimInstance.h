#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LinkedAnimInstance.h"
#include "BipedRangedCombatAnimInstance.generated.h"

class AArcheryWeaponVisual;

UCLASS(NonTransient)
class G1R_API UBipedRangedCombatAnimInstance : public ULinkedAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HasAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsArrowLoaded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsReloading;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsDrawing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsQuickshoot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CanDoAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_LeftHandPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_LeftHandRot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AArcheryWeaponVisual* m_CurrentWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DrawAnimationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_NotchAnimationRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DrawingStringAlpha;
    
    UPROPERTY()
    float m_DrawingStringTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_StartDrawStringResistanceAtRatio;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FinishDrawStringResistanceAtRatio;
    
public:
    UBipedRangedCombatAnimInstance();

};

