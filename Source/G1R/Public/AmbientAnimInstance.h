#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "AmbientAnimInstance.generated.h"

UCLASS(NonTransient)
class G1R_API UAmbientAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    TEnumAsByte<EMovementMode> m_MovementMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsLanding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsGrounded;
    
    UAmbientAnimInstance();

};

