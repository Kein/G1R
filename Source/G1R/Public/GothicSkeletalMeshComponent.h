#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "GothicActorComponentInterface.h"
#include "OptimizedBoneColliderUpdate.h"
#include "Templates/SubclassOf.h"
#include "GothicSkeletalMeshComponent.generated.h"

class UAnimInstance;
class UGenericAnimationConfig;
class UGothicAbilitySystemComponent;
class UMaterialInterface;
class UPhysicalAnimationComponent;
class UPhysicalBonesConfig;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSkeletalMeshComponent : public USkeletalMeshComponentBudgeted, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* AbilityComp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAnimInstance> m_GenericAnimClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGenericAnimationConfig> m_GenericAnimationConfig;
    
    UPROPERTY(Instanced)
    UPhysicalBonesConfig* m_PhysicalBonesConfig;
    
    UPROPERTY(Instanced)
    UPhysicalAnimationComponent* m_PhysicalAnimationComponent;
    
    UPROPERTY()
    int8 m_prevLOD;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FName m_BoneToCut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_CutBoneInvert;
    
    UPROPERTY(Transient)
    FOptimizedBoneColliderUpdate m_BoneColliderUpdates;
    
    UGothicSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFreezeMaterial(UMaterialInterface* FreezeMaterial);
    
    UFUNCTION(BlueprintCallable)
    void ForceCacheParameterAsDirty();
    

    // Fix for true pure virtual functions not being implemented
};

