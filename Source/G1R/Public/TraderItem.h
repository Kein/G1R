#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TraderItem.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FTraderItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_ItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_Chapter;
    
    FTraderItem();
};

