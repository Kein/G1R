#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "InteractionSpotHandle.h"
#include "AIWorldEvent.generated.h"

class AGothicCharacterState;
class AGothicNPCState;

UCLASS(Abstract, Blueprintable)
class UAIWorldEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxAllowedNonMainParticipants;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSet<FName> MainParticipantUniqueNames;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<AGothicCharacterState*> JoinedNonMainParticipants;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSet<AGothicCharacterState*> JoinedMainParticipants;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FInteractionSpotHandle> EventLocations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EventLocationRadius;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRequireCharactersToBeAtEventLocationBeforeJoining;
    
    UPROPERTY(BlueprintReadWrite)
    bool bEndInteractionOfNonMainParticipantsWhenEnding;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer RequireCharactersHaveAnyOfToJoin;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer BlockCharactersWithAnyOfFromJoining;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWaitUntilMainParticipantsAreAtEventLocation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bWaitUntilAllMainParticipantsHaveJoined;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer WaitForMainParticipantsToHaveAnyOf;
    
    UAIWorldEvent();

    UFUNCTION(BlueprintPure)
    bool IsCharacterAtEventLocation(const AGothicCharacterState* CharacterState) const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicCharacterState*> GetJoinedParticipants() const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicNPCState*> GetJoinedNPCParticipants() const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicNPCState*> GetJoinedNonMainNPCParticipants() const;
    
    UFUNCTION(BlueprintPure)
    TSet<AGothicNPCState*> GetJoinedMainNPCParticipants() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_IsCharacterAllowedToJoin(const AGothicCharacterState* CharacterState) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EventStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_EventEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CharacterLeft(AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_CharacterJoined(AGothicCharacterState* CharacterState);
    
};

