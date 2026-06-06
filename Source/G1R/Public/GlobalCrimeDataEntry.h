#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ECrimeAffectedEntitySource.h"
#include "InGameTime.h"
#include "Templates/SubclassOf.h"
#include "GlobalCrimeDataEntry.generated.h"

class UInteractiveObjectDefinition;
class UItemDefinition;

USTRUCT(BlueprintType)
struct FGlobalCrimeDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag CrimeType;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag AreaTag;
    
    UPROPERTY(BlueprintReadWrite)
    FInGameTime TimeCommitted;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsForgiven;
    
    UPROPERTY(BlueprintReadWrite)
    ECrimeAffectedEntitySource AffectedEntitySource;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UItemDefinition> ItemDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UInteractiveObjectDefinition> InteractiveObjectDefinitionClass;
    
    UPROPERTY(BlueprintReadWrite)
    FName CriminalGlobalID;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag CriminalGuild;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> VictimGlobalIDs;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer VictimGuilds;
    
    UPROPERTY(BlueprintReadWrite)
    FName TrueCriminalGlobalID;
    
    G1R_API FGlobalCrimeDataEntry();
};

