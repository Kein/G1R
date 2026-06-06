#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ItemActionHandler.generated.h"

class UActionKeywords;
class UItemDefinition;

USTRUCT(BlueprintType)
struct FItemActionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UActionKeywords> ItemActionClass;
    
    G1R_API FItemActionHandler();
};

