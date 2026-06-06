#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "GothicPhysicsMaterialTags.generated.h"

UCLASS(CollapseCategories)
class G1R_API UGothicPhysicsMaterialTags : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer m_tags;
    
    UGothicPhysicsMaterialTags();

};

