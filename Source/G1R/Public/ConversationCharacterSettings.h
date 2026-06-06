#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "VoiceTypeSubset.h"
#include "ConversationCharacterSettings.generated.h"

UCLASS(Abstract)
class G1R_API UConversationCharacterSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ForCharacter;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> IncludeTopicsOf;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FVoiceTypeSubset> VoiceTypeSubsets;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag DefaultExpression;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Priority;
    
    UConversationCharacterSettings();

};

