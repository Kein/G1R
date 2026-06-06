#pragma once
#include "CoreMinimal.h"
#include "ELightingModifierType.generated.h"

UENUM(BlueprintType)
enum class ELightingModifierType : uint8 {
    Location,
    Daytime,
    Weather,
    Fog,
    ShotMode,
    Shadow,
    ExternalLightIntensity,
    ExternalLightColor,
    SkinTone,
    SceneBrightness,
    ParticipantNumber,
    UniqueArea,
};

