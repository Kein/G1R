#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySleepEndedMessageList.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilitySleepEndedMessageList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TArray<FText> m_Messages;
    
    G1R_API FGameplayAbilitySleepEndedMessageList();
};

