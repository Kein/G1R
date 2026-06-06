#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GothicWaterVolumeVectorFieldCell.h"
#include "GothicWaterVolumeVectorFieldUtils.generated.h"

class UObject;

UCLASS(BlueprintType)
class UGothicWaterVolumeVectorFieldUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicWaterVolumeVectorFieldUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCellBox(const UObject* WorldContextObject, const FVector& Center, float CellSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCellArrow(const UObject* WorldContextObject, const FVector& Start, const FVector& End);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugCell(const UObject* WorldContextObject, const FGothicWaterVolumeVectorFieldCell& Cell, float CellSize);
    
};

