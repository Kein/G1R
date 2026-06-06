#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScarsVisualSettings.generated.h"

USTRUCT(BlueprintType)
struct FScarsVisualSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasScars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDarkSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SelectedMasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector SelectedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScarNormalIntensity;
    
    G1R_API FScarsVisualSettings();
};

