#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_ChangeMaterial.generated.h"

class UMaterialInterface;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_ChangeMaterial : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* m_Material;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> SlotNames;
    
public:
    UAnimNotify_ChangeMaterial();

};

