#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InventoryByChapter.h"
#include "Templates/SubclassOf.h"
#include "TraderConfig.generated.h"

class UDifficultySettings;
class UItemDefinition;

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UTraderConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    double m_TotalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_Type;
    
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, int32> m_Items;
    
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, int32> m_DefaultItems;
    
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, int32> m_LastDefaultItems;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<TSubclassOf<UDifficultySettings>, FInventoryByChapter> m_ItemsByDifficulty;
    
    UPROPERTY()
    TArray<FString> m_GeneratedEvents;
    
    UPROPERTY()
    int32 m_Liquidity;
    
    UTraderConfig();

    UFUNCTION(BlueprintCallable)
    void AddTraderItem(TSubclassOf<UItemDefinition> Item, int32 Amount, const FString& Chapter, TSubclassOf<UDifficultySettings> difficulty);
    
};

