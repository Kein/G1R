#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWallClimbLinkStatus.h"
#include "GothicSmartLinkComponentGeneric.h"
#include "GothicSmartLinkComponentWallClimbing.generated.h"

class AClimbableWall;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentWallClimbing : public UGothicSmartLinkComponentGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleAnywhere)
    EWallClimbLinkStatus WallClimbStatus;
    
    UPROPERTY(VisibleAnywhere)
    FString InfoText;
    
    UPROPERTY(EditAnywhere)
    AClimbableWall* ClimbableWallBottom;
    
    UPROPERTY(EditAnywhere)
    AClimbableWall* ClimbableWallTop;
    
    UPROPERTY()
    FTransform StartBottomTransform;
    
    UPROPERTY()
    FTransform EndTopTransform;
    
    UPROPERTY()
    FTransform CustomBehaviourTransform;
    
public:
    UGothicSmartLinkComponentWallClimbing(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void InitLink();
    
};

