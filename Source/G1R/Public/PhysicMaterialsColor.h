#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "PhysicMaterialsColor.generated.h"

class UPhysicalMaterial;

UCLASS()
class UPhysicMaterialsColor : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, FLinearColor> PhysicsMaterialColor;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, FLinearColor> DirtyingMaterials;
    
    UPROPERTY(EditAnywhere)
    TMap<UPhysicalMaterial*, FLinearColor> RainDirtyingMaterials;
    
    UPhysicMaterialsColor();

};

