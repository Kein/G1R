#pragma once
#include "CoreMinimal.h"
#include "RegionTrait.h"
#include "RegionTagComponent.generated.h"

UCLASS(EditInlineNew)
class G1R_API URegionTagComponent : public URegionTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString RegionName;
    
public:
    URegionTagComponent();

};

