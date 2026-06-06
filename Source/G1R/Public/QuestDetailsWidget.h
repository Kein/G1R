#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "EQuestSortOrder.h"
#include "QuestDetailsWidget.generated.h"

class UQuest;

UCLASS(EditInlineNew)
class G1R_API UQuestDetailsWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EQuestSortOrder m_SortOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_StatesToShow;
    
public:
    UQuestDetailsWidget();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UQuest*> GetObjectives(const UQuest* _Quest) const;
    
};

