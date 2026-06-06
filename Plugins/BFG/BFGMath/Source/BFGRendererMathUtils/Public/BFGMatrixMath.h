#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/CameraTypes.h"
#include "BFGMatrixMath.generated.h"

class USceneCaptureComponent2D;

UCLASS(BlueprintType)
class BFGRENDERERMATHUTILS_API UBFGMatrixMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFGMatrixMath();

    UFUNCTION(BlueprintCallable)
    static FMatrix TransposeMatrix(const FMatrix& _a);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 TransformVector(const FMatrix& _a, const FVector4& _b);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix MultiplyMatrices(const FMatrix& _a, const FMatrix& _b);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix InvertMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix InvertMatrix(const FMatrix& _a);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetViewProjectionMatrix(USceneCaptureComponent2D* _pComponent);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetViewMatrix(USceneCaptureComponent2D* _pComponent);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetProjectionMatrix(USceneCaptureComponent2D* _pComponent);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetMatrixFromTransform(FTransform _Transform, bool _bWithScale);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput);
    
    UFUNCTION(BlueprintCallable)
    static void GetMatrixAsLinearColor(FLinearColor& _row1, FLinearColor& _row2, FLinearColor& _row3, FLinearColor& _row4, const FMatrix& _m, bool _bTransposeOutput);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetInverseViewProjMatrix(const FMatrix& _matView, const FMatrix& _matProj);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix ComputeOffCenterProjectionMatrix(USceneCaptureComponent2D* _pComponent, FVector _vPoint, float _fRadius);
    
    UFUNCTION(BlueprintCallable)
    static void BuildProjectionMatrix(FIntPoint RenderTargetSize, TEnumAsByte<ECameraProjectionMode::Type> ProjectionType, float FOV, float InOrthoWidth, FMatrix& ProjectionMatrix);
    
};

