#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CharacterUniqueName.h"
#include "ClockTimeRange.h"
#include "EStoryActionRegionRequirementsMode.h"
#include "RegionStoryActionCharacterCondition.h"
#include "RegionStoryActionQuestCondition.h"
#include "RegionTrait.h"
#include "Templates/SubclassOf.h"
#include "StoryActionRegionTrait.generated.h"

class AGothicPlayerState;
class UQuest;

UCLASS(Abstract, EditInlineNew)
class G1R_API UStoryActionRegionTrait : public URegionTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSubclassOf<UQuest>, FRegionStoryActionQuestCondition> QuestRequirements;
    
    UPROPERTY(EditAnywhere)
    TArray<FRegionStoryActionCharacterCondition> CharacterRequirements;
    
    UPROPERTY(EditAnywhere)
    FClockTimeRange RequiredClockTime;
    
    UPROPERTY(EditAnywhere)
    EStoryActionRegionRequirementsMode RequirementsMustBe;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer HandleCharactersEnteringWith;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer IgnoreCharactersEnteringWith;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> HandleCharacterUniqueNames;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTriggerLimit;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int32 NumTimesToTrigger;
    
    UStoryActionRegionTrait();

    UFUNCTION(BlueprintPure)
    FCharacterUniqueName GetHero() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AGothicPlayerState*> GetAllPlayers() const;
    
    UFUNCTION(BlueprintPure)
    FCharacterUniqueName FindCharacter(FName CharacterUniqueName) const;
    
};

