#pragma once
#include "CoreMinimal.h"
#include "GothicAnimInstance.h"
#include "AnimInstance_AmbientLife.generated.h"

UCLASS(NonTransient)
class G1R_API UAnimInstance_AmbientLife : public UGothicAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsLanding;
    
public:
    UAnimInstance_AmbientLife();

};

