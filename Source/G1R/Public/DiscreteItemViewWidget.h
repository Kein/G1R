#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "AlkUserWidget.h"
#include "EAlkMouseButton.h"
#include "Templates/SubclassOf.h"
#include "ViewItemWidget_MouseSettings.h"
#include "DiscreteItemViewWidget.generated.h"

class UObject;
class USizeBox;
class UTileViewWidget;
class UUserWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UDiscreteItemViewWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSimpleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSelectionChangedEventBP, int32, _OldIndex, UObject*, _OldItem, int32, _NewIndex, UObject*, _NewItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FScrollOffsetRowsChangedEventBP, int32, _OldScrollOffset, int32, _NewScrollOffset);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNumItemsChangedEventBP, int32, _OldNum, int32, _NewNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FItemLongClickProgressChangedEventBP, EAlkMouseButton, _MouseButton, int32, _Index, UObject*, _Item, double, _Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemIsHoveredChangedEventBP, int32, _Index, UObject*, _Item, bool, _IsHovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemClickedEventBP, EAlkMouseButton, _MouseButton, int32, _Index, UObject*, _Item);
    
    UPROPERTY(BlueprintAssignable)
    FNumItemsChangedEventBP m_OnNumItemsChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSelectionChangedEventBP m_OnSelectionChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemIsHoveredChangedEventBP m_OnItemIsHoveredChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemLongClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemLongClickAbortedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemLongClickProgressChangedEventBP m_OnItemLongClickProgressChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FScrollOffsetRowsChangedEventBP m_OnScrollOffsetRowsChangedBP;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDelegate m_OnInteractedBP;
    
    UPROPERTY()
    UWidget::FGetBool m_AdjustHeightDependingOnItemsDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    USizeBox* SizeBox_Grid;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UTileViewWidget* TileView_Grid;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> m_EntryWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_ItemWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_ItemHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_ItemMargin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_RemoveOutermostMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_AdjustHeightDependingOnItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ViewWidthItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_ViewHeightItems;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_AdjustedMinHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_AdjustedMaxHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HideWhenEmpty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsHoverExclusive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewItemWidget_MouseSettings m_MouseInteractionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_PreviewRows;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_SmoothScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_SmoothScrollingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_StartWithInputEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY(Transient)
    UObject* m_HoveredItem;
    
    UPROPERTY(Transient)
    UObject* m_LastHoveredItem;
    
public:
    UDiscreteItemViewWidget();

    UFUNCTION(BlueprintCallable)
    void StopSelectVertical();
    
    UFUNCTION(BlueprintCallable)
    void StopSelectHorizontal();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectUp();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectRight();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectPreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectNextPage();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectLeft();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectDown();
    
    UFUNCTION(BlueprintCallable)
    void SetViewWidth(int32 _WidthInItems);
    
    UFUNCTION(BlueprintCallable)
    void SetViewHeight(int32 _HeightInItems);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(int32 _Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetListItemsBP(const TArray<UObject*>& _ListItems, bool _KeepSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetItemWidth(double _Width);
    
    UFUNCTION(BlueprintCallable)
    void SetItemHeight(double _Height);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void SetAdaptViewHeightToContent(bool _Adapt);
    
    UFUNCTION(BlueprintCallable)
    void SelectUp();
    
    UFUNCTION(BlueprintCallable)
    void SelectRight();
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextPage();
    
    UFUNCTION(BlueprintCallable)
    void SelectNext();
    
    UFUNCTION(BlueprintCallable)
    void SelectLeft();
    
    UFUNCTION(BlueprintCallable)
    void SelectLast();
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(UObject* _Item);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirst();
    
    UFUNCTION(BlueprintCallable)
    void SelectDown();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToTop();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToBottom();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemAtIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(UObject* _Item);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionChanged(int32 _OldIndex, UObject* _OldItem, int32 _NewIndex, UObject* _NewItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnScrollOffsetRowsChanged(int32 _OldScrollOffset, int32 _NewScrollOffset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNumItemsChanged(int32 _OldNum, int32 _NewNum);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClickProgressChanged(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item, double _Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClicked(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClickAborted(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemIsHoveredChanged(int32 _Index, UObject* _Item, bool _IsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemDoubleClicked(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemClicked(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LongClickCurrentItem(EAlkMouseButton _MouseButton);
    
    UFUNCTION(BlueprintPure)
    bool IsList() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrid() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetViewWidth() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetViewHeight() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumRows() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumItems() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumColumns() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UObject*> GetListItems() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetItemAt(int32 _Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetIndexForItem(const UObject* _Item) const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetHoveredOrSelectedItem() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHoveredOrSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentScrollOffsetFromEnd() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentScrollOffset() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    bool ClickCurrentItem(EAlkMouseButton _MouseButton);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void ClearItems();
    
    UFUNCTION(BlueprintCallable)
    void ClearHoverItem();
    
    UFUNCTION(BlueprintCallable)
    void AddItem(UObject* _Item);
    
};

