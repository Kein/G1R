#pragma once
#include "CoreMinimal.h"
#include "EConversationCameraHideMode.generated.h"

UENUM(BlueprintType)
enum class EConversationCameraHideMode : uint8 {
    None,
    HideSpeaker,
    HideListener,
    HideSpeakerWeapon,
    HideListenerWeapon,
    OnlyShowSpeaker,
    OnlyShowListener,
    DontModify,
};

