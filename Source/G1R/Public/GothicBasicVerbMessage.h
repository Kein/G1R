#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBasicVerbMessage.generated.h"

USTRUCT(BlueprintType)
struct FGothicBasicVerbMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag m_Verb;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_ConnectedTrigger;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_Event;
    
    UPROPERTY(BlueprintReadWrite)
    double m_Magnitude;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_Saved;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_IsPlayer;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_UserCharacter;
    
    UPROPERTY(BlueprintReadWrite)
    FName m_UserName;
    
    G1R_API FGothicBasicVerbMessage();
};

