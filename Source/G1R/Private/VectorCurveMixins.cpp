#include "VectorCurveMixins.h"

UVectorCurveMixins::UVectorCurveMixins() {
}

FRotator UVectorCurveMixins::GetRotatorAt(const FRuntimeVectorCurve& OutputCurve, float TimeKey) {
    return FRotator{};
}

void UVectorCurveMixins::AddVectorAt(FRuntimeVectorCurve& OutputCurve, float TimeKey, const FVector& InputVector) {
}

void UVectorCurveMixins::AddRotatorAt(FRuntimeVectorCurve& OutputCurve, float TimeKey, const FRotator& InputRotator) {
}


