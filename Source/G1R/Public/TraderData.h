#pragma once
#include "CoreMinimal.h"
#include "InventoryByChapter.h"
#include "Templates/SubclassOf.h"
#include "TraderData.generated.h"

class UDifficultySettings;
class UItemDefinition;

USTRUCT(BlueprintType)
struct FTraderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FName m_TradersUniqueName;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UItemDefinition>, int32> m_Items;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UItemDefinition>, int32> m_DefaultItems;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FString> m_GeneratedEvents;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UDifficultySettings>, FInventoryByChapter> m_ItemsByDifficulty;
    
    UPROPERTY(BlueprintReadWrite)
    double m_TotalSeconds;
    
    G1R_API FTraderData();
};

