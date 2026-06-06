#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicSmartLinkComponentInteractionSpot.h"
#include "GothicSmartLinkDoor.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkDoor : public UGothicSmartLinkComponentInteractionSpot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector InitalRelativeLinkStart;
    
    UPROPERTY(EditAnywhere)
    FVector InitalRelativeLinkEnd;
    
public:
    UGothicSmartLinkDoor(const FObjectInitializer& ObjectInitializer);

};

