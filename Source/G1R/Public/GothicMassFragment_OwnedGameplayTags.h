#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MassCommonTypes.h"
#include "GothicMassFragment_OwnedGameplayTags.generated.h"

USTRUCT()
struct G1R_API FGothicMassFragment_OwnedGameplayTags : public FMassFragment {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGameplayTagContainer OwnedGameplayTags;
    
    FGothicMassFragment_OwnedGameplayTags();
};

