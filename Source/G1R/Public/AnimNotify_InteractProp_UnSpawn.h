#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "EInventoryTypes.h"
#include "AnimNotify_InteractProp_UnSpawn.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_InteractProp_UnSpawn : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_PropName;
    
    UPROPERTY(EditAnywhere)
    EInventoryTypes m_InventoryHidde;
    
public:
    UAnimNotify_InteractProp_UnSpawn();

};

