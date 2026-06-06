#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InGameTime.h"
#include "Interaction.generated.h"

USTRUCT(BlueprintType)
struct FInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionTag;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    UPROPERTY(EditAnywhere)
    float DurationSeconds;
    
    UPROPERTY(EditAnywhere)
    float DurationVariance;
    
    UPROPERTY(EditAnywhere)
    float CooldownOnFail;
    
    UPROPERTY(Transient)
    float LastTimeFailed;
    
    UPROPERTY(EditAnywhere)
    bool bMayUseCustomAbility;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FInGameTime> RequireTimeSinceAction;
    
    G1R_API FInteraction();
};

