#pragma once
#include "CoreMinimal.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "PerceptionConditionDelegateDelegate.generated.h"

class AGothicCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(bool, FPerceptionConditionDelegate, const AGothicCharacter*, CharacterSelf, const FRememberedPerception&, Perception, const FPerceptionShortTermMemory&, Memory);

