#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "G1RPhysicsMaterial.generated.h"

UCLASS(CollapseCategories)
class G1R_API UG1RPhysicsMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Hardness;
    
    UG1RPhysicsMaterial();

};

