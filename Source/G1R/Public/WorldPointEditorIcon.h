#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "WorldPointEditorIcon.generated.h"

class USpawnAIAgentDefinition;

UCLASS(Abstract, BlueprintType)
class G1R_API UWorldPointEditorIcon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FName, TSubclassOf<USpawnAIAgentDefinition>> m_IconMap;
    
    UWorldPointEditorIcon();

};

