#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RelationshipEvaluation.h"
#include "StaticRelationshipEvaluation.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FStaticRelationshipEvaluation : public FRelationshipEvaluation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag MyGuild;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag OthersGuild;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag MySpecies;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag OthersSpecies;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag MyLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag OthersLocation;
    
    FStaticRelationshipEvaluation();
};

