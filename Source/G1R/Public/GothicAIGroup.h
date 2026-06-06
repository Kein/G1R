#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "OwnedLooseGameplayTags.h"
#include "Templates/SubclassOf.h"
#include "GothicAIGroup.generated.h"

class AActor;
class AGothicCharacter;
class AGothicCharacterState;
class UGothicAIGroup;

UCLASS(Blueprintable)
class G1R_API UGothicAIGroup : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer OwnedTagsToAddToMembers;
    
    UPROPERTY()
    TMap<AGothicCharacterState*, FOwnedLooseGameplayTags> MemberOwnedLooseTags;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<AGothicCharacter*> JoinedCharacters;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayAttribute> ListenToAttributeChangesOf;
    
public:
    UGothicAIGroup();

    UFUNCTION(BlueprintCallable)
    void MakeCharacterLeaveGroup(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void MakeCharacterJoinGroup(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCharacterAllowedToJoin(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool HasCharacterJoinedGroup(AGothicCharacter* Character) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMemberUnconscious(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMemberLeft(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMemberJoined(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleMemberDied(AGothicCharacter* Character);
    
    UFUNCTION()
    void HandleJoinedCharacterDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetJoinedCharactersWithTags(const FGameplayTagContainer& Included, const FGameplayTagContainer& Excluded) const;
    
    UFUNCTION(BlueprintNativeEvent)
    TArray<AActor*> GetGroupTargets() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGroupCenterLocation() const;
    
    UFUNCTION(BlueprintPure)
    FBox GetGroupBoundingBox() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicCharacter*> GetConsciousJoinedCharacters() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<UGothicAIGroup*> GetAllActiveGroupsOfClass(const UObject* WorldContextObject, TSubclassOf<UGothicAIGroup> GroupClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayImGui(AGothicCharacter* ContextCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugDrawGroup(float LifeTimeSeconds) const;
    
};

