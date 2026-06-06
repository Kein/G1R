#pragma once
#include "CoreMinimal.h"
#include "StoryActionRegionTrait.h"
#include "Templates/SubclassOf.h"
#include "TriggerForcedConversationsRegionTrait.generated.h"

class UCharacterDefinition;

UCLASS(EditInlineNew)
class G1R_API UTriggerForcedConversationsRegionTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCharacterDefinition>> ForCharacters;
    
    UTriggerForcedConversationsRegionTrait();

};

