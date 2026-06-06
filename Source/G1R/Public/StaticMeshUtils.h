#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "StaticMeshUtils.generated.h"

class UStaticMesh;
class UStaticMeshComponent;

UCLASS(BlueprintType)
class G1R_API UStaticMeshUtils : public UObject {
    GENERATED_BODY()
public:
    UStaticMeshUtils();

    UFUNCTION(BlueprintCallable)
    static void SetLightMapResolution(UStaticMesh* StaticMesh, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetColorsByArray(UStaticMeshComponent* StaticMeshComponent, TMap<FVector3f, FColor> Colors);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLightMapResolution(UStaticMesh* StaticMesh);
    
};

