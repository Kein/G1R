#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PersonalAreaOwnershipSettings.generated.h"

USTRUCT(BlueprintType)
struct FPersonalAreaOwnershipSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer OwnedAreas;
    
    G1R_API FPersonalAreaOwnershipSettings();
};

