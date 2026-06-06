#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "IKAnimInstanceBase.h"
#include "MMBipedIKAnimInstance.generated.h"

class UBipedIKConfig;

UCLASS(NonTransient)
class G1R_API UMMBipedIKAnimInstance : public UIKAnimInstanceBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightOffsetTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftOffsetTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftLockLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftLockRotation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_RightOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LeftOffsetRot;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_PelvisOffset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_RightFootFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_LeftFootFound;
    
    UPROPERTY(BlueprintReadOnly)
    float m_LeftLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_RightLockAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float m_PelvisAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableFootIkR;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RootOffsetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SpeedRootIk;
    
    UPROPERTY(Instanced)
    UBipedIKConfig* m_IKConfig_Biped;
    
public:
    UMMBipedIKAnimInstance();

};

