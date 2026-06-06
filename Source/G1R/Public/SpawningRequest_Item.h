#pragma once
#include "CoreMinimal.h"
#include "SpawningRequest.h"
#include "Templates/SubclassOf.h"
#include "SpawningRequest_Item.generated.h"

class UItemDefinition;

UCLASS()
class G1R_API USpawningRequest_Item : public USpawningRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<UItemDefinition> m_ItemDefinition;
    
public:
    USpawningRequest_Item();

};

