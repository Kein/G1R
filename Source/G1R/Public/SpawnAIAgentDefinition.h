#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "SpawnAIAgentDefinition.generated.h"

class AAIAgentCharacter;
class UAIAgentConfig;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class G1R_API USpawnAIAgentDefinition : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UAIAgentConfig> AIAgentConfigClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AAIAgentCharacter> AIAgentCharacterClass;
    
    USpawnAIAgentDefinition();

};

