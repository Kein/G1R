#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KnowledgeSet.h"
#include "Templates/SubclassOf.h"
#include "ConversationTopicSet.generated.h"

class AGothicCharacter;
class UConversationTopic;
class UConversationTopicSet;

UCLASS(BlueprintType)
class G1R_API UConversationTopicSet : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UConversationTopic*> AllTopics;
    
    UPROPERTY()
    TSet<TSubclassOf<UConversationTopic>> AddedTopicClasses;
    
    UConversationTopicSet();

    UFUNCTION(BlueprintCallable)
    void RemoveTopicsOf(FName CharacterName, FName instigatorName);
    
    UFUNCTION(BlueprintCallable)
    static UConversationTopicSet* NewTopicSet(UObject* Owner);
    
    UFUNCTION(BlueprintPure)
    TArray<UConversationTopic*> GetAvailableUIRelevantRootTopics(const AGothicCharacter* Other) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UConversationTopic*> GetAvailableSubdialogTopics(const AGothicCharacter* Other) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UConversationTopic*> GetAvailableRootTopics(const AGothicCharacter* Other) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UConversationTopic*> GetAvailableFollowupTopics(const AGothicCharacter* Other, const FKnowledgeSet& KnowledgesToConsider) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UConversationTopic*> GetAvailableFallbackTopics(const AGothicCharacter* Other) const;
    
    UFUNCTION(BlueprintPure)
    UConversationTopic* FindTopicInstanceOfClass(TSubclassOf<UConversationTopic> TopicClass) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UConversationTopic>> FindAllRootTopicsOf(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UConversationTopic>> FindAllForcedRootTopicsOf(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UConversationTopic>> FindAllFollowupTopicsOf(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UConversationTopic>> FindAllFallbackTopicsOf(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    void AddTopicsOfIncludedCharacter(FName IncludedCharacterName, FName instigatorName, FName ThisCharacterName);
    
    UFUNCTION(BlueprintCallable)
    void AddTopicsOf(FName CharacterName, FName instigatorName, FName ReplaceNameWith);
    
    UFUNCTION(BlueprintCallable)
    void AddTopics(const TArray<TSubclassOf<UConversationTopic>>& Topics, FName ReplaceCharacterName);
    
    UFUNCTION(BlueprintCallable)
    UConversationTopic* AddTopic(TSubclassOf<UConversationTopic> TopicClass, FName ReplaceCharacterName);
    
};

