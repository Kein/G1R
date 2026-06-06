#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConversationForceRangeType.h"
#include "EConversationForceSense.h"
#include "GameplayAbilityBase.h"
#include "PerceptionShortTermMemory.h"
#include "RememberedPerception.h"
#include "GameplayAbilityForceConversation.generated.h"

class AGothicCharacter;
class UConversationTopicSet;

UCLASS()
class G1R_API UGameplayAbilityForceConversation : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer BlockForceWhenSelfHasAnyTags;
    
    UPROPERTY()
    TMap<FName, UConversationTopicSet*> ForcedConversationsByOther;
    
    UPROPERTY(EditAnywhere)
    TMap<EConversationForceRangeType, float> ForceRangeTypeValues;
    
    UPROPERTY(EditAnywhere)
    TMap<EConversationForceRangeType, EConversationForceSense> ForceRangeTypeSenses;
    
    UPROPERTY(EditAnywhere)
    float RequiredAwarenessOfOther;
    
public:
    UGameplayAbilityForceConversation();

    UFUNCTION()
    bool HasSomethingToSayTo(const AGothicCharacter* CharacterSelf, const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, EConversationForceRangeType RangeType);
    
    UFUNCTION()
    void HandleSensedSomeoneWeHaveSomethingToSayTo(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory, EConversationForceRangeType RangeType);
    
    UFUNCTION()
    void FoundCharacterWeHaveSomethingToSayTo(const AGothicCharacter* OtherCharacter, EConversationForceRangeType RangeType);
    
};

