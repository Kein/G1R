#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ELinkAnchorType.h"
#include "LinkAnchorComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API ULinkAnchorComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ELinkAnchorType AnchorType;
    
    UPROPERTY(EditAnywhere)
    FName ForComponentWithTag;
    
    ULinkAnchorComponent(const FObjectInitializer& ObjectInitializer);

};

