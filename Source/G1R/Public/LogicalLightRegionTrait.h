#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RegionTrait.h"
#include "LogicalLightRegionTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API ULogicalLightRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer AllowedLightSourceTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoredLightSourceTags;
    
    UPROPERTY(EditAnywhere)
    float AmbientLightIntensity;
    
    UPROPERTY(EditAnywhere)
    FLinearColor AmbientLightColor;
    
    ULogicalLightRegionTrait();

};

