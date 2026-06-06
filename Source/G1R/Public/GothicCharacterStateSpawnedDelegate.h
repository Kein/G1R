#pragma once
#include "CoreMinimal.h"
#include "GothicCharacterStateSpawnedDelegate.generated.h"

class AGothicNPCState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGothicCharacterStateSpawned, AGothicNPCState*, CharacterState);

