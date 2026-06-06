#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "IntermediateObjectDefinition.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UIntermediateObjectDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<int32, FString> m_WorldVisualStages;
    
    UIntermediateObjectDefinition();

};

