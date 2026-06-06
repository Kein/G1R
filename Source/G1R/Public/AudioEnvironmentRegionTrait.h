#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RegionTrait.h"
#include "AudioEnvironmentRegionTrait.generated.h"

class UObject;

UCLASS(EditInlineNew)
class G1R_API UAudioEnvironmentRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag AudioEnvironmentTag;
    
    UPROPERTY(EditAnywhere)
    float Priority;
    
    UPROPERTY(EditAnywhere)
    float MinWeatherIntensity;
    
    UPROPERTY(EditAnywhere)
    float MaxWeatherIntensity;
    
    UPROPERTY(EditAnywhere)
    float ThunderIntensity;
    
    UAudioEnvironmentRegionTrait();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTag FindAudioEnvironmentTagAtLocation(const UObject* WorldContextObject, const FVector& Location);
    
};

