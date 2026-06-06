#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TattooVisualSettings.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTattooVisualSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasTattoo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> HeadTattooMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TattooColorHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> TorsoTattooMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TattooColorTorso;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> LegsTattooMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor TattooColorLegs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TattooColorIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TattooNormalIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TattooSubsurfaceOpacityMultiplier;
    
    G1R_API FTattooVisualSettings();
};

