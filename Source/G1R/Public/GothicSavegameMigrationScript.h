#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EGothicSaveGameVersion.h"
#include "EQuestState.h"
#include "InGameTime.h"
#include "Templates/SubclassOf.h"
#include "GothicSavegameMigrationScript.generated.h"

class UAIState_DailyRoutine;
class UCharacterDefinition;
class UConversationTopic;
class UGameStory;
class UGothicPersistentDataGame;
class UItemDefinition;
class UQuest;

UCLASS(Abstract, Blueprintable)
class G1R_API UGothicSavegameMigrationScript : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    UGothicPersistentDataGame* SaveGame;
    
    UPROPERTY(EditAnywhere)
    EGothicSaveGameVersion ApplyToVersionsAfterIncluding;
    
    UPROPERTY(EditAnywhere)
    EGothicSaveGameVersion ApplyToVersionsBefore;
    
    UPROPERTY(EditAnywhere)
    float Order;
    
public:
    UGothicSavegameMigrationScript();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetStoryValueInt32(TSubclassOf<UGameStory> story, FName StoryValueName, int32 Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetStoryValueInGameTime(TSubclassOf<UGameStory> story, FName StoryValueName, FInGameTime Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetQuestState(TSubclassOf<UQuest> Quest, EQuestState State) const;
    
    UFUNCTION(BlueprintCallable)
    void SetNPCDailyRoutine(FName GlobalId, TSubclassOf<UAIState_DailyRoutine> DailyRoutine);
    
    UFUNCTION(BlueprintCallable)
    void SetItemCountInPlayerInventory(TSubclassOf<UItemDefinition> ItemDefinition, int32 Count, const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void SetItemCountInNPCInventory(FName GlobalId, TSubclassOf<UItemDefinition> ItemDefinition, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveKnowledgeOfTopicFromCharacter(FName CharacterUniqueName, TSubclassOf<UConversationTopic> TopicClass);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveKnowledgeOfTextFromCharacter(FName CharacterUniqueName, const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveKnowledgeFromCharacter(FName CharacterUniqueName, FName Knowledge);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    bool Migrate();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsQuestInState(TSubclassOf<UQuest> Quest, EQuestState State) const;
    
    UFUNCTION(BlueprintPure)
    bool HasNPCDailyRoutine(FName GlobalId, TSubclassOf<UAIState_DailyRoutine> DailyRoutine) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterKnowledgeOfTopic(FName CharacterUniqueName, TSubclassOf<UConversationTopic> TopicClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterKnowledgeOfText(FName CharacterUniqueName, const FText& Text) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterKnowledgeOf(FName CharacterUniqueName, FName Knowledge) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStoryValueInt32(TSubclassOf<UGameStory> story, FName StoryValueName) const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetStoryValueInGameTime(TSubclassOf<UGameStory> story, FName StoryValueName) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStoryChapter(TSubclassOf<UGameStory> story) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountInPlayerInventory(TSubclassOf<UItemDefinition> ItemDefinition, const FString& PlayerId) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemCountInNPCInventory(FName GlobalId, TSubclassOf<UItemDefinition> ItemDefinition) const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetInGameTimeNow() const;
    
    UFUNCTION(BlueprintPure)
    bool FindGlobalIDForUniqueName(FName UniqueName, FName& OutGlobalID) const;
    
    UFUNCTION(BlueprintPure)
    bool FindGlobalIDForCharacter(TSubclassOf<UCharacterDefinition> CharacterDefinition, FName& OutGlobalID) const;
    
};

