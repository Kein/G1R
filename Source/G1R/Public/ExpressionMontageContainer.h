#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ExpressionMontageContainer.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FExpressionMontageContainer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAnyOfCharacterTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireAllOfCharacterTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer RequireNoneOfCharacterTags;
    
    UPROPERTY(EditAnywhere)
    int32 Layer;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer ForExpression;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag Posture;
    
    UPROPERTY(EditAnywhere)
    TArray<TSoftObjectPtr<UAnimSequence>> AnimSequences;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> AnimSequencesInPath;
    
    G1R_API FExpressionMontageContainer();
};

