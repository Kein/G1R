#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ELockPickAnimState.h"
#include "LockPickAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class G1R_API ULockPickAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELockPickAnimState m_LockPickAnimState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> m_SuccessAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> m_FailureAnimations;
    
public:
    ULockPickAnimInstance();

};

