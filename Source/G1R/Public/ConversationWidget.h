#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "GothicCommonActivatableWidget.h"
#include "RequestedSkipDelegateDelegate.h"
#include "TopicKeyboardSelectionDelegateDelegate.h"
#include "TopicSelectedDelegateDelegate.h"
#include "ConversationWidget.generated.h"

class UBorder;
class UConversationTopic;
class UDataTable;
class UListView;

UCLASS(Abstract, EditInlineNew)
class G1R_API UConversationWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTopicSelectedDelegate OnTopicSelected;
    
    UPROPERTY(BlueprintAssignable)
    FTopicSelectedDelegate OnSubTopicSelected;
    
    UPROPERTY(BlueprintAssignable)
    FRequestedSkipDelegate OnRequestSkip;
    
    UPROPERTY(BlueprintAssignable)
    FTopicKeyboardSelectionDelegate OnKeyboardSelection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle TriggeringSkipAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> SelectionKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SelectionKeyUpDpadAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SelectionKeyDownDpadAction;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* m_DefaultSubtitleTextStyleSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* m_LargerSubtitleTextStyleSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBorder* TopicListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UListView* TopicList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBorder* SubTopicListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UListView* SubTopicList;
    
    UPROPERTY(EditAnywhere)
    float m_TypeSpeed;
    
public:
    UConversationWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void StartedActingTopic(UConversationTopic* Topic);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowVoiceline(const FText& Text, const bool ForeignLanguage);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTopicSelection(const TArray<UConversationTopic*>& TopicsToShow);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSubTopicSelection(const TArray<UConversationTopic*>& TopicsToShow);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubtitleTextStyle(UDataTable* _TextStyleSet);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestoreFocus();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShowTopicSelection(const TArray<UConversationTopic*> TopicsToShow);
    
    UFUNCTION(BlueprintCallable)
    void OnShowSubTopicSelection(const TArray<UConversationTopic*> SubTopicsToShow);
    
    UFUNCTION()
    void OnSelectionKeyUp();
    
    UFUNCTION()
    void OnSelectionKeyDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyUserSelectedTopic(UConversationTopic* Topic);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUserSelectedSubTopic(UConversationTopic* Topic);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUserRequestedSkip();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void HideVoiceline();
    
private:
    UFUNCTION()
    void GetLeftStickYAxisValue(const FKey& Key, float Delta);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void FinishedActingTopic(UConversationTopic* Topic);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ConversationStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ConversationEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_ShowAllText();
    
};

