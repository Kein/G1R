#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EQuestSortOrder.h"
#include "ManagementContentWidgetBase.h"
#include "QuestWidgetBucket.h"
#include "QuestMain.generated.h"

class UAlkFilterWidget;
class UQuest;
class UTexture2D;

UCLASS(EditInlineNew)
class G1R_API UQuestMain : public UManagementContentWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UAlkFilterWidget* GenericFilter_Quests;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EQuestSortOrder m_SortOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ActiveQuestStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_CompletedQuestStates;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_DefaultFilterIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FQuestWidgetBucket> m_QuestBuckets;
    
public:
    UQuestMain();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateQuests();
    
public:
    UFUNCTION(BlueprintCallable)
    static TArray<UQuest*> SortQuestsCopy(const TArray<UQuest*>& _Quests, EQuestSortOrder _Order);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectFilterForQuest(FGameplayTag _FallbackFilterTag, const UQuest* _Quest);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UQuest*> GetQuests(FGameplayTag _FilterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FText GetQuestlineTitle(FGameplayTag _FilterTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FText GetQuestlineDescription(FGameplayTag _FilterTag) const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UQuest*> FilterQuestsByStateCopy(const TArray<UQuest*>& _Quests, int32 _StateMask);
    
};

