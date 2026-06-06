#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PostProcessAnimInstance.generated.h"

class UAnimSequence;
class UFggto;

UCLASS(NonTransient)
class G1R_API UPostProcessAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* FaceBlendshapeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFggto* GTO;
    
    UPostProcessAnimInstance();

};

