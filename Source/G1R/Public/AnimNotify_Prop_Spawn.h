#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Prop.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_Prop_Spawn.generated.h"

class UItemDefinition;

UCLASS(CollapseCategories)
class UDEPRECATED_AnimNotify_Prop_Spawn : public UDEPRECATED_AnimNotify_Prop {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemDefinition> m_ItemDef;
    
    UDEPRECATED_AnimNotify_Prop_Spawn();

};

