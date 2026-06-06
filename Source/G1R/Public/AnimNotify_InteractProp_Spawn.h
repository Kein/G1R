#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_InteractProp_Spawn.generated.h"

class AItemVisual;
class UStaticMesh;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_InteractProp_Spawn : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_SocketName;
    
    UPROPERTY(EditAnywhere)
    FName m_PropName;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* m_StaticMesh;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AItemVisual> ItemVisualClass;
    
    UPROPERTY(EditAnywhere)
    bool m_DontDuplicate;
    
    UPROPERTY(EditAnywhere)
    EInventoryTypes m_InventoryHidde;
    
    UAnimNotify_InteractProp_Spawn();

};

