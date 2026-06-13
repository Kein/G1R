#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LookAtConfig.h"
#include "ELookAtState.h"
#include "IKAnimInstanceBase.h"
#include "BipedIKAnimInstance.generated.h"

class AItemVisual;
class AMeleeWeaponVisual;
class UBipedIKConfig;
class UCarryComponent;
class UMeshComponent;

UCLASS(NonTransient)
class G1R_API UBipedIKAnimInstance : public UIKAnimInstanceBase {
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
    FVector m_RightFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_LeftFootNormal;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_RightFootFound;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_LeftFootFound;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_PelvisOffset;
    
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
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableHandIkL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnableHandIkR;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UMeshComponent> m_CurrentWeaponMesh;
    
    UPROPERTY()
    AItemVisual* m_LastItemVisual;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform m_LeftHandTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_LeftHandPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_LeftHandRot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_RightHandPos;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator m_RightHandRot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AMeleeWeaponVisual* m_CurrentMeleeWeapon;
    
    UPROPERTY(Instanced)
    UBipedIKConfig* m_IKConfig_Biped;
    
    UPROPERTY(BlueprintReadOnly)
    ELookAtState m_CurrentLookAtState;
    
    UPROPERTY(BlueprintReadOnly)
    FLookAtConfig m_RuntimeLookAtConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bImplementsLookAtSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_Idle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_IdleCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_CombatMelee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_Block;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_CombatArchery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_Aiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_CombatArcheryCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_AimingCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_Interact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_DrugsAlcohol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLookAtConfig m_LookAtConfig_Conversation;
    
public:
    UBipedIKAnimInstance();

};

