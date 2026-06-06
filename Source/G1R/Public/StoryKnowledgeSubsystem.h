#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KnowledgeSet.h"
#include "StoryKnowledgeSubsystem.generated.h"

UCLASS(BlueprintType)
class G1R_API UStoryKnowledgeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<FName, FKnowledgeSet> StoryKnowledge;
    
    UStoryKnowledgeSubsystem();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveKnowledgeSetFromCharacter(FName CharacterName, const FKnowledgeSet& Set);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveKnowledgeFromCharacter(FName CharacterName, FName Knowledge);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCharacter(FName CharacterName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllKnowledgeFromCharacter(FName CharacterName);
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterKnowledge(FName CharacterName, FName Knowledge) const;
    
    UFUNCTION(BlueprintPure)
    FKnowledgeSet GetKnowledgeOfCharacter(FName CharacterName) const;
    
    UFUNCTION(BlueprintCallable)
    void AddKnowledgeToCharacter(FName CharacterName, const FName& Knowledge);
    
    UFUNCTION(BlueprintCallable)
    void AddKnowledgeSetToCharacter(FName CharacterName, const FKnowledgeSet& KnowledgeSet);
    
};

