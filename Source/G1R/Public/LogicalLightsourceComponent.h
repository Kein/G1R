#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "ELogicalLightsourceAttenuation.h"
#include "ELogicalLightsourceType.h"
#include "LogicalLightsourceComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API ULogicalLightsourceComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor LightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELogicalLightsourceType LightsourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELogicalLightsourceAttenuation Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer AssociatedLightTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockedByWalls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotConeAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpotConeInnerAngleFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BoxInnerFraction;
    
    ULogicalLightsourceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsLightTypeAbleToHaveRadius() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLightTypeAbleToHaveAttenuation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLightTypeAbleToCastShadows() const;
    
    UFUNCTION(BlueprintPure)
    float EvaluateTheoreticalIntensityAtLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    float EvaluateIntensityAtLocationWithCostlyShadowRaycast(const FVector& Location) const;
    
};

