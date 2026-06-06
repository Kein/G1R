#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "OwnershipSettings.generated.h"

class UCharacterDefinition;

USTRUCT(BlueprintType)
struct G1R_API FOwnershipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag UseOwnershipOfArea;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedByGuild;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UCharacterDefinition>> OwnedByCharacter;
    
    FOwnershipSettings();
};

