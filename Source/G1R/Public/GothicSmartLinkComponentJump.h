#pragma once
#include "CoreMinimal.h"
#include "EJumpDownArrowLocationMode.h"
#include "GothicSmartLinkComponentClimb.h"
#include "GothicSmartLinkComponentJump.generated.h"

class UArrowComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentJump : public UGothicSmartLinkComponentClimb {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float MaxAngleDiffGoalToStartToMoveAnchor;
    
    UPROPERTY(EditAnywhere)
    EJumpDownArrowLocationMode JumpDownArrowLocationMode;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    UArrowComponent* TargetJumpDownToComponent;
    
public:
    UGothicSmartLinkComponentJump(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void InitLink();
    
};

