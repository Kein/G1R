#pragma once
#include "CoreMinimal.h"
#include "EConversationCameraRelativeParticipant.generated.h"

UENUM(BlueprintType)
enum class EConversationCameraRelativeParticipant : uint8 {
    Speaker,
    Listener,
    AdditionalParticipants,
    ConversationInitiator,
    Player,
};

