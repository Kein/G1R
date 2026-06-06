#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BoneFeetData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBoneFeetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector4 FeetTextureSize;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Diffuse;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* Normal;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* AO;
    
    G1R_API FBoneFeetData();
};

