#pragma once
#include "CoreMinimal.h"
#include "OnSubtitleFinishedDisplayDelegate.generated.h"

class UConversationVoicelineData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubtitleFinishedDisplay, UConversationVoicelineData*, _Voiceline);

