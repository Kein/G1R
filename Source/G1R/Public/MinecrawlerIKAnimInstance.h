#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IKAnimInstanceBase.h"
#include "MinecrawlerIKAnimInstance.generated.h"

class UMinecrawlerIKConfig;

UCLASS(NonTransient)
class G1R_API UMinecrawlerIKAnimInstance : public UIKAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackRightOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackLeftOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_MidRightOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_MidLeftOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontRightOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontLeftOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_FrontRightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_FrontLeftOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_MidRightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_MidLeftOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_BackRightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_BackLeftOffsetRot;
    
    UPROPERTY(Instanced)
    UMinecrawlerIKConfig* m_IKConfig_Minecrawler;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkL_B;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkL_M;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkL_F;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkR_B;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkR_M;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkR_F;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftBackLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightBackLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftMidLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightMidLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftFrontLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightFrontLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightBackLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftBackLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightBackLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftBackLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightMidLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftMidLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightMidLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftMidLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightFrontLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftFrontLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightFrontLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftFrontLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackRightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_BackLeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_MidRightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_MidLeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontRightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_FrontLeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_BackLeftFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_BackRightFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_MidLeftFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_MidRightFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_FrontLeftFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_FrontRightFound;
    
public:
    UMinecrawlerIKAnimInstance();

};

