#pragma once
#include "CoreMinimal.h"
#include "InteractiveObjectActor.h"
#include "AnimatedInteractiveObjectActor.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API AAnimatedInteractiveObjectActor : public AInteractiveObjectActor {
    GENERATED_BODY()
public:
    AAnimatedInteractiveObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BP_PlayAnimationMontage(UAnimMontage* Montage, FName StartSection);
    
    UFUNCTION(BlueprintPure)
    FName BP_GetCurrentMontageSection() const;
    
};

