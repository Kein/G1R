#pragma once
#include "CoreMinimal.h"
#include "ELookAtState.generated.h"

UENUM(BlueprintType)
enum class ELookAtState : uint8 {
    Idle,
    Idle_Crouch,
    Combat_Melee,
    Block,
    Combat_Archery,
    Aiming,
    Combat_Archery_Crouch,
    Aiming_Crouch,
    Interact,
    Drugs_Alcohol,
    Conversation,
};

