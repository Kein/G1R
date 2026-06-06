#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuadrupedIKAnimInstance.h"
#include "LizardIKAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API ULizardIKAnimInstance : public UQuadrupedIKAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector m_Tail02Offset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_Tail03Offset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_Tail04Offset;
    
    UPROPERTY(BlueprintReadOnly)
    FVector m_Tail05Offset;
    
public:
    ULizardIKAnimInstance();

};

