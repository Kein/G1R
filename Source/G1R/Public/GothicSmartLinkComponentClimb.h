#pragma once
#include "CoreMinimal.h"
#include "GothicSmartLinkComponentGeneric.h"
#include "GothicSmartLinkComponentClimb.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentClimb : public UGothicSmartLinkComponentGeneric {
    GENERATED_BODY()
public:
    UGothicSmartLinkComponentClimb(const FObjectInitializer& ObjectInitializer);

};

