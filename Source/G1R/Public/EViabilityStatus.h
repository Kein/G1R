#pragma once
#include "CoreMinimal.h"
#include "EViabilityStatus.generated.h"

UENUM(BlueprintType)
enum class EViabilityStatus : uint8 {
    Valid,
    AlwaysValid,
    ObstructedView,
    ZeroWeight,
    NotOnWhitelist,
    HeightThresholdFail,
    DistanceThresholdFail,
    InternalCheckFail,
    UnspecifiedFail,
    AdditionalParticipantFail,
    ForbiddenInvert,
    SpeakerMissingRequiredTags,
    ListenerMissingRequiredTags,
    SpeakerOrListenerMissingRequiredTags,
    SpeakerHasForbiddenTags,
    ListenerHasForbiddenTags,
    SpeakerOrListenerHasForbiddenTags,
    MoreParticipantsThanAllowed,
    LessParticipantsThanAllowed,
};

