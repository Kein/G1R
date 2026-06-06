#pragma once
#include "CoreMinimal.h"
#include "SpawningRequest.h"
#include "Templates/SubclassOf.h"
#include "SpawningRequest_AIAgent.generated.h"

class AGothicCharacter;
class AGothicNPCState;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API USpawningRequest_AIAgent : public USpawningRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<USpawnAIAgentDefinition> m_SpawningDefinition;
    
public:
    USpawningRequest_AIAgent();

protected:
    UFUNCTION()
    void HandleVisualsSpawned(AGothicNPCState* CharacterState, AGothicCharacter* Character);
    
};

