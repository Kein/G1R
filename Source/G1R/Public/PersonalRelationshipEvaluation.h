#pragma once
#include "CoreMinimal.h"
#include "RelationshipEvaluation.h"
#include "PersonalRelationshipEvaluation.generated.h"

class AGothicCharacterState;

USTRUCT(BlueprintType)
struct FPersonalRelationshipEvaluation : public FRelationshipEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AGothicCharacterState* Me;
    
    UPROPERTY(BlueprintReadOnly)
    AGothicCharacterState* Other;
    
    G1R_API FPersonalRelationshipEvaluation();
};

