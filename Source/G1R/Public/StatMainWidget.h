#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "ManagementContentWidgetBase.h"
#include "StatMainWidget.generated.h"

class UPanelWidget;
class UScrollBox;
class UStatEntryWidget;

UCLASS(EditInlineNew)
class G1R_API UStatMainWidget : public UManagementContentWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> m_Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    TArray<UStatEntryWidget*> m_EntryWidgets;
    
    UPROPERTY(Instanced, Transient)
    UStatEntryWidget* m_SelectedEntryWidget;
    
public:
    UStatMainWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLayout(UPanelWidget* _PanelWidget);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllStatWidgets();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopMoveSelection();
    
    UFUNCTION(BlueprintCallable)
    void StartMoveSelection(const FVector2D& _Direction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectSkill(FGameplayTag _SkillTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectFirstEntry();
    
    UFUNCTION(BlueprintCallable)
    void SelectEntryAt(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void SelectEntry(UStatEntryWidget* _EntryWidget, bool _ScrollIntoView);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectAttribute(const FGameplayAttribute& _Attribute);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelectionChanged(UStatEntryWidget* _EntryWidget, bool _ScrollIntoView);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveSelection(const FVector2D& _Direction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetScrollFluffVisibilities(const UScrollBox* _ScrollBox, ESlateVisibility& _VisibilityTop, ESlateVisibility& _VisibilityBottom) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
};

