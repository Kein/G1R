#pragma once
#include "CoreMinimal.h"
#include "EConversationMultiParticipantMode.generated.h"

UENUM(BlueprintType)
enum class EConversationMultiParticipantMode : uint8 {
    OnlySpeakerListener,
    OnlyMultiConversations,
    AllowAll,
};

