#include "VertexMeshUtils.h"

UVertexMeshUtils::UVertexMeshUtils() {
}

FVector4 UVertexMeshUtils::GetClosestStringVertexColor(const FVector ReferencePosition, const TArray<AStaticMeshActor*> DetectedStrings, AStaticMeshActor*& ClosestString, float& ClosestDistance) {
    return FVector4{};
}

void UVertexMeshUtils::ApplyVertexColorToStaticMesh(const UStaticMeshComponent* StaticMeshComponent) {
}

void UVertexMeshUtils::ApplyColorBasedOnThreePoints(const AStaticMeshActor* StringActor, AActor* EdgeA, AActor* EdgeB, AActor* Center, EVertexColor VertexColor) {
}


