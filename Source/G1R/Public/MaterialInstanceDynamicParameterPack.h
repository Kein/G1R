#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaterialInstanceDynamicParameterPack.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FMaterialInstanceDynamicParameterPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, float> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FLinearColor> VectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, UTexture*> TextureParameterValues;
    
    G1R_API FMaterialInstanceDynamicParameterPack();
};

