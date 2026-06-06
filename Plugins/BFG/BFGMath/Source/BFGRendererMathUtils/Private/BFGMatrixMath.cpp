#include "BFGMatrixMath.h"

UBFGMatrixMath::UBFGMatrixMath() {
}

FMatrix UBFGMatrixMath::TransposeMatrix(const FMatrix& _a) {
    return FMatrix{};
}

FVector4 UBFGMatrixMath::TransformVector(const FMatrix& _a, const FVector4& _b) {
    return FVector4{};
}

FMatrix UBFGMatrixMath::MultiplyMatrices(const FMatrix& _a, const FMatrix& _b) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::InvertMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::InvertMatrix(const FMatrix& _a) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::GetViewProjectionMatrix(USceneCaptureComponent2D* _pComponent) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::GetViewMatrix(USceneCaptureComponent2D* _pComponent) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::GetProjectionMatrix(USceneCaptureComponent2D* _pComponent) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::GetMatrixFromTransform(FTransform _Transform, bool _bWithScale) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::GetMatrixFromColor(const FLinearColor& _row1, const FLinearColor& _row2, const FLinearColor& _row3, const FLinearColor& _row4, bool _bTransposeInput) {
    return FMatrix{};
}

void UBFGMatrixMath::GetMatrixAsLinearColor(FLinearColor& _row1, FLinearColor& _row2, FLinearColor& _row3, FLinearColor& _row4, const FMatrix& _m, bool _bTransposeOutput) {
}

FMatrix UBFGMatrixMath::GetInverseViewProjMatrix(const FMatrix& _matView, const FMatrix& _matProj) {
    return FMatrix{};
}

FMatrix UBFGMatrixMath::ComputeOffCenterProjectionMatrix(USceneCaptureComponent2D* _pComponent, FVector _vPoint, float _fRadius) {
    return FMatrix{};
}

void UBFGMatrixMath::BuildProjectionMatrix(FIntPoint RenderTargetSize, TEnumAsByte<ECameraProjectionMode::Type> ProjectionType, float FOV, float InOrthoWidth, FMatrix& ProjectionMatrix) {
}


