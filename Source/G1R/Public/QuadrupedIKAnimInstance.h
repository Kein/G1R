#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IKAnimInstanceBase.h"
#include "QuadrupedIKAnimInstance.generated.h"

class UQuadrupedIKConfig;

UCLASS(NonTransient)
class G1R_API UQuadrupedIKAnimInstance : public UIKAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackRightOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackLeftOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontRightOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontLeftOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackPelvisOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontPelvisOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_FrontRightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_FrontLeftOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_BackRightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_BackLeftOffsetRot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_NeckOffsetRot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_SpineOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightBackLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftBackLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightBackLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftBackLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftBackLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightBackLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontRightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontLeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackRightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackLeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_FrontRightFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_FrontLeftFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_BackRightFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_BackLeftFound;
    
    UPROPERTY(Instanced)
    UQuadrupedIKConfig* m_IKConfig_Quadruped;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIk_F_L;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIk_F_R;
    
public:
    UQuadrupedIKAnimInstance();

};

