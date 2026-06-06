#pragma once
#include "CoreMinimal.h"
#include "GothicAnimInstance.h"
#include "LinkedAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API ULinkedAnimInstance : public UGothicAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UGothicAnimInstance* m_BaseAnimInstance;
    
    ULinkedAnimInstance();

};

