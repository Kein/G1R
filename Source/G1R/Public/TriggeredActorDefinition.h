#pragma once
#include "CoreMinimal.h"
#include "InventoryDefinition.h"
#include "TriggeredActorDefinition.generated.h"

UCLASS(EditInlineNew)
class G1R_API UTriggeredActorDefinition : public UInventoryDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName m_ConnectedTrigger;
    
    UTriggeredActorDefinition();

};

