#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "GothicLockPickActor.generated.h"

class ULockPickAnimInstance;

UCLASS(Abstract)
class AGothicLockPickActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ULockPickAnimInstance* m_LockPickAnimInstance;
    
public:
    AGothicLockPickActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnStopTickingTimerFired();
    
};

