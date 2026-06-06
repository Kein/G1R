#pragma once
#include "CoreMinimal.h"
#include "GothicCharacterStateCharacterVisualsDestroyedDelegate.generated.h"

class AGothicNPCState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGothicCharacterStateCharacterVisualsDestroyed, AGothicNPCState*, CharacterState);

