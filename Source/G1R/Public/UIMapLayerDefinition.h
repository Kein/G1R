#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EQuestState.h"
#include "Templates/SubclassOf.h"
#include "UIMapLayerDefinition.generated.h"

class UQuest;

UCLASS(BlueprintType)
class G1R_API UUIMapLayerDefinition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FText m_Name;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayTagContainer m_MapTags;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UQuest> m_ShowLayerQuestClass;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EQuestState> m_ShowLayerQuestStates;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UQuest> m_HideLayerQuestClass;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<EQuestState> m_HideLayerQuestStates;
    
    UUIMapLayerDefinition();

};

