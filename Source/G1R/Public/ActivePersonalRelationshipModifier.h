#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InGameTime.h"
#include "PersonalRelationshipModifier.h"
#include "ActivePersonalRelationshipModifier.generated.h"

class AGothicCharacterState;
class UActivePersonalRelationshipModifier;
class UCharacterPerceptionComponent;

UCLASS()
class G1R_API UActivePersonalRelationshipModifier : public UPersonalRelationshipModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame)
    FInGameTime ActivatedAtTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, SaveGame)
    FInGameTime ValidFor;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanTick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDiscardIfNotHighestRelationshipWeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDiscardIfNotHighestHostilityWeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDiscardIfNotHighestRankWeight;
    
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer OwnedTagsWhileActive;
    
    UActivePersonalRelationshipModifier();

    UFUNCTION(BlueprintCallable)
    void SetValidUntilTime(const FInGameTime& Time);
    
    UFUNCTION(BlueprintCallable)
    void SetValidForTime(const FInGameTime& Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetValidForIngameSeconds(float InGameSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetValidForIngameHours(float InGameHours);
    
    UFUNCTION(BlueprintCallable)
    void SetValidForIngameDays(float InGameDays);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupPerceptions(UCharacterPerceptionComponent* Perception);
    
    UFUNCTION(BlueprintPure)
    bool HasTimeRanOut() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleModifierRemoved();
    
    UFUNCTION(BlueprintNativeEvent)
    void HandleModifierAdded();
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetTimeLeft() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    FInGameTime GetInGameTimeNow() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetDebugDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void Discard();
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_Tick(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_MatchesModifier(const UActivePersonalRelationshipModifier* OtherModifier) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_DrawImGui();
    
};

