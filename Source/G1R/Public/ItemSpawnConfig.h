#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpawnItemEvent.h"
#include "SpawnItemList.h"
#include "Templates/SubclassOf.h"
#include "ItemSpawnConfig.generated.h"

class UCharacterDefinition;

USTRUCT(BlueprintType)
struct G1R_API FItemSpawnConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName m_WorldPoint;
    
    UPROPERTY()
    bool m_IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Refillable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RefillHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnItemList> m_InitialItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSpawnItemEvent> m_EventItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_InheritOwnerFromArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UCharacterDefinition>> m_OwnedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer m_OwnedByGuild;
    
    FItemSpawnConfig();
};

