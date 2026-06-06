#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EVertexColor.h"
#include "VertexMeshUtils.generated.h"

class AActor;
class AStaticMeshActor;
class UStaticMeshComponent;

UCLASS(BlueprintType)
class G1R_API UVertexMeshUtils : public UObject {
    GENERATED_BODY()
public:
    UVertexMeshUtils();

private:
    UFUNCTION(BlueprintCallable)
    static FVector4 GetClosestStringVertexColor(const FVector ReferencePosition, const TArray<AStaticMeshActor*> DetectedStrings, AStaticMeshActor*& ClosestString, float& ClosestDistance);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVertexColorToStaticMesh(const UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyColorBasedOnThreePoints(const AStaticMeshActor* StringActor, AActor* EdgeA, AActor* EdgeB, AActor* Center, EVertexColor VertexColor);
    
};

