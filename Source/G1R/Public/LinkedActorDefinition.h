#pragma once
#include "CoreMinimal.h"
#include "InventoryDefinition.h"
#include "LinkedActorDefinition.generated.h"

class AActor;

UCLASS(EditInlineNew)
class G1R_API ULinkedActorDefinition : public UInventoryDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_LinkedActor;
    
    ULinkedActorDefinition();

};

