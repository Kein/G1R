#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RegionNumItems.h"
#include "ReplicatedStringMap.h"
#include "Templates/SubclassOf.h"
#include "TraderManager.generated.h"

class AGothicCharacter;
class UItemDefinition;
class UTraderConfig;
class UWorldDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UTraderManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UTraderConfig* m_LastTraderConfig;
    
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, FReplicatedStringMap> m_PayloadMods;
    
    UPROPERTY()
    TSubclassOf<UWorldDefinition> m_WorldDefinition;
    
    UPROPERTY()
    TArray<UTraderConfig*> m_InstancedTraders;
    
    UPROPERTY()
    TMap<FName, FRegionNumItems> m_RegionItemAmountForTrading;
    
    UPROPERTY()
    TMap<TSubclassOf<UItemDefinition>, int32> m_GlobalItemAmountForTrading;
    
    UPROPERTY()
    TMap<FName, int32> m_RegionLiquidity;
    
    UPROPERTY()
    TMap<FName, int32> m_RegionTraders;
    
public:
    UTraderManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RemoveCharacterOre(AGothicCharacter* Character, int32 oreToRemove);
    
    UFUNCTION(BlueprintCallable)
    static float GetCharacterOre(AGothicCharacter* Character);
    
};

