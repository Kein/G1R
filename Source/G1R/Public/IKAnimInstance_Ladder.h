#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseGothicAnimInstance.h"
#include "IKAnimInstance_Ladder.generated.h"

UCLASS(NonTransient)
class G1R_API UIKAnimInstance_Ladder : public UBaseGothicAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightHandTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftHandTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightFootTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftFootTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_RightFootLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftFootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CapsuleColliderLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_InterpSpeedFoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_HandImpactOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HandDistanceTowardsCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxHandVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FootVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FootHorizontalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FootRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RightSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_LeftSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RightHandBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_LeftHandBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_RightFootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_LeftFootBone;
    
    UIKAnimInstance_Ladder();

};

