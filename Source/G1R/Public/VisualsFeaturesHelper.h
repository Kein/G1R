#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DirtVisualSettings.h"
#include "ScarsVisualSettings.h"
#include "TattooVisualSettings.h"
#include "VisualsFeaturesHelper.generated.h"

UCLASS(BlueprintType)
class G1R_API UVisualsFeaturesHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVisualsFeaturesHelper();

private:
    UFUNCTION(BlueprintPure)
    static bool BP_AreTattoosEquals(const FTattooVisualSettings A, const FTattooVisualSettings B);
    
    UFUNCTION(BlueprintPure)
    static bool BP_AreScarsEquals(const FScarsVisualSettings A, const FScarsVisualSettings B);
    
    UFUNCTION(BlueprintPure)
    static bool BP_AreDirtSpotSettingsEquals(const FDirtVisualSettings A, const FDirtVisualSettings B);
    
    UFUNCTION(BlueprintPure)
    static bool BP_AreDirtBaseSettingsEquals(const FDirtVisualSettings A, const FDirtVisualSettings B);
    
};

