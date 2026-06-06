#pragma once
#include "CoreMinimal.h"
#include "VisualHitData.generated.h"

class IDisposable;
class UDisposable;
class UScalarMaterialPropertyProvider;
class UVectorMaterialPropertyProvider;

USTRUCT(BlueprintType)
struct FVisualHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UScalarMaterialPropertyProvider* m_HitRadiusProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UVectorMaterialPropertyProvider* m_HitLocationProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UScalarMaterialPropertyProvider* m_AmountProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UScalarMaterialPropertyProvider* m_WaterVerticalMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UScalarMaterialPropertyProvider* m_WaterVerticalWetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TScriptInterface<IDisposable> m_ActiveEffect;
    
    G1R_API FVisualHitData();
};

