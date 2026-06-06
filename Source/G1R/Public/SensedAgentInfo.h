#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SensedAgentInfo.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FSensedAgentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float TimeUpdated;
    
    UPROPERTY(BlueprintReadWrite)
    float TimeFirstSensed;
    
    UPROPERTY(BlueprintReadWrite)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite)
    FVector NavPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FromPosition;
    
    UPROPERTY(BlueprintReadWrite)
    FVector FromNavPosition;
    
    UPROPERTY(BlueprintReadWrite)
    float Awareness;
    
    UPROPERTY(BlueprintReadWrite)
    bool bHasFullAwareness;
    
    FSensedAgentInfo();
};

