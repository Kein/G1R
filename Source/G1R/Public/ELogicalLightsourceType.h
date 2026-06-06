#pragma once
#include "CoreMinimal.h"
#include "ELogicalLightsourceType.generated.h"

UENUM(BlueprintType)
enum class ELogicalLightsourceType : uint8 {
    PointLight,
    DirectionalLight,
    GlobalAmbientLight,
    SpotLight,
    Box,
};

