#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameEventSend.generated.h"

USTRUCT(BlueprintType)
struct FGameEventSend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_Verb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_InstigatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Forced;
    
    G1R_API FGameEventSend();
};

