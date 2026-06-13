#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseGothicAnimInstance.h"
#include "CacheProxyData.h"
#include "IKAnimInstanceBase.generated.h"

class AActor;
class UDataModule_Locomotion;
class UDataModule_LookAt;
class UDataModule_Targeting;
class UIKConfig;
class ULocomotionAnimInstance;

UCLASS(NonTransient)
class G1R_API UIKAnimInstanceBase : public UBaseGothicAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool SwitchLegIk;
    
    UPROPERTY(BlueprintReadOnly)
    bool SwitchLookAt;
    
protected:
    UPROPERTY()
    FCacheProxyData m_CachedLocomotionData;
    
    UPROPERTY(Instanced)
    UIKConfig* m_IKConfig;
    
    UPROPERTY()
    ULocomotionAnimInstance* m_AnimInstanceDirector;
    
    UPROPERTY()
    UDataModule_Locomotion* m_DataModule_Locomotion;
    
    UPROPERTY()
    UDataModule_Targeting* m_DataModule_Targeting;
    
    UPROPERTY()
    UDataModule_LookAt* m_DataModule_LookAt;
    
    UPROPERTY()
    TArray<AActor*> m_ActorsToIgnore;
    
    UPROPERTY()
    FGameplayTagContainer GAS_Disable_IK;
    
    UPROPERTY(EditAnywhere)
    float m_VelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    float m_IKForcePercentage;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_OverrideWorldGravity;
    
    UPROPERTY(EditAnywhere)
    FVector m_OverrideWorldGravitySwimming;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LookAtPosition;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator m_LookAtRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float m_EnableHeadIK;
    
    UPROPERTY(BlueprintReadOnly)
    float m_EnableFootIK;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableTargeting;
    
    UPROPERTY()
    FName m_LookAtActorName;
    
public:
    UIKAnimInstanceBase();

};

