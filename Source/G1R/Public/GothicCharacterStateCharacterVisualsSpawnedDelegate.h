#pragma once
#include "CoreMinimal.h"
#include "GothicCharacterStateCharacterVisualsSpawnedDelegate.generated.h"

class AGothicCharacter;
class AGothicNPCState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGothicCharacterStateCharacterVisualsSpawned, AGothicNPCState*, CharacterState, AGothicCharacter*, Character);

