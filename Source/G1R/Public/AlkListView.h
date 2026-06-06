#pragma once
#include "CoreMinimal.h"
#include "CommonListView.h"
#include "EAlkMouseButton.h"
#include "ViewItemWidget_MouseSettings.h"
#include "AlkListView.generated.h"

class UObject;

UCLASS(Blueprintable)
class G1R_API UAlkListView : public UCommonListView {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FItemLongClickProgressChangedEventBP, EAlkMouseButton, _MouseButton, int32, _Index, UObject*, _Item, double, _Progress);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemClickedEventBP, EAlkMouseButton, _MouseButton, int32, _Index, UObject*, _Item);
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemLongClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemClickedEventBP m_OnItemLongClickAbortedBP;
    
    UPROPERTY(BlueprintAssignable)
    FItemLongClickProgressChangedEventBP m_OnItemLongClickProgressChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FViewItemWidget_MouseSettings m_MouseInteractionSettings;
    
public:
    //FIXME
    //UAlkListView();

    UFUNCTION(BlueprintCallable)
    void StopSelect();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void StartSelectNext();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetClass(UClass* _Class);
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void SelectNext();
    
    UFUNCTION(BlueprintCallable)
    void SelectLast();
    
    UFUNCTION(BlueprintCallable)
    void SelectFirst();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClickProgressChanged(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item, double _Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClicked(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemLongClickAborted(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnItemClickedAdvanced(EAlkMouseButton _MouseButton, int32 _Index, UObject* _Item);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedIndex() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollDistanceRemaining() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollDistance() const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsItem(const UObject* _Item) const;
    
};

