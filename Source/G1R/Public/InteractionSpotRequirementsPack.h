#pragma once
#include "CoreMinimal.h"
#include "AIWorldEventRequirements.h"
#include "CharacterGuildRequirements.h"
#include "CharacterSpeciesRequirements.h"
#include "CharacterTypeTagRequirements.h"
#include "InventoryItemRequirements.h"
#include "OtherSpotOccupiedRequirements.h"
#include "StoryQuestRequirements.h"
#include "StoryValueRequirements.h"
#include "TagClaimRequirements.h"
#include "TimeRangeRequirements.h"
#include "TimeSinceLastUseRequirements.h"
#include "UniqueNameRequirements.h"
#include "WeatherRequirements.h"
#include "InteractionSpotRequirementsPack.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FInteractionSpotRequirementsPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_TagClaimRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTagClaimRequirements OwnedCharacterTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_UniqueNameRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FUniqueNameRequirements UniqueNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_CharacterSpeciesRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterSpeciesRequirements Species;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_CharacterTypeTagRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterTypeTagRequirements CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_CharacterGuildRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCharacterGuildRequirements Guild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_WeatherRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FWeatherRequirements Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_OtherSpotOccupiedRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOtherSpotOccupiedRequirements OtherSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_StoryValueRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoryValueRequirements StoryValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_StoryQuestRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStoryQuestRequirements QuestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_TimeRangeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeRangeRequirements TimeRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_AIWorldEventRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIWorldEventRequirements AIWorldEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_InventoryItemRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInventoryItemRequirements InventoryItemRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnable_TimeSinceLastUseRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSinceLastUseRequirements TimeSinceLastUseRequirements;
    
    FInteractionSpotRequirementsPack();
};

