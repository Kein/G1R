#pragma once
#include "CoreMinimal.h"
#include "EConversationState.generated.h"

UENUM(BlueprintType)
enum class EConversationState : uint8 {
    None,
    PrepareRequestConversation,
    RequestingConversation,
    RespondingToRequest,
    GettingReady,
    WaitingForOthers,
    InConversation,
    RequestFailed,
    NoTopicsToTalkAbout,
    End,
};

