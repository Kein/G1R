#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "PerceivedAgent.h"
#include "PerceivedInteractiveObject.h"
#include "RememberedPerception.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct G1R_API FRememberedPerception {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPerceivedAgent Sensing;
    
    UPROPERTY(BlueprintReadWrite)
    FPerceivedAgent Origin;
    
    UPROPERTY(BlueprintReadWrite)
    FPerceivedAgent Affected;
    
    UPROPERTY(BlueprintReadWrite)
    FPerceivedAgent Target;
    
    UPROPERTY(BlueprintReadWrite)
    FPerceivedAgent Instigator;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> AffectedActor;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<AActor> EffectCauser;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> AffectedCharacterUniqueNames;
    
    UPROPERTY(BlueprintReadWrite)
    FPerceivedInteractiveObject PerceivedObject;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer EffectCauserTags;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer ContextTags;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite)
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite)
    float EstimatedImpactAtSeconds;
    
    UPROPERTY(BlueprintReadWrite)
    float TimeUpdated;
    
    UPROPERTY(BlueprintReadWrite)
    float TimeFirstSensed;
    
    FRememberedPerception();
};

