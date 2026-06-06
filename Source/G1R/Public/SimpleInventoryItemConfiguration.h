#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SimpleInventoryItemConfiguration.generated.h"

class UInventoryMain;

USTRUCT(BlueprintType)
struct FSimpleInventoryItemConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UInventoryMain> m_TabType;
    
    G1R_API FSimpleInventoryItemConfiguration();
};

