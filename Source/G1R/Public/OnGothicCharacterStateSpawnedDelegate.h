#pragma once
#include "CoreMinimal.h"
#include "OnGothicCharacterStateSpawnedDelegate.generated.h"

class AGothicNPCState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGothicCharacterStateSpawned, AGothicNPCState*, CharacterState);

