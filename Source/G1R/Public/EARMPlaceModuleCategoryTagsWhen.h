#pragma once
#include "CoreMinimal.h"
#include "EARMPlaceModuleCategoryTagsWhen.generated.h"

UENUM(BlueprintType)
enum class EARMPlaceModuleCategoryTagsWhen : uint8 {
    Visited,
    PassedConditions,
    ProducedAtLeastOneResponse,
};

