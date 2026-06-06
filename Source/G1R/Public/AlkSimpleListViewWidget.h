#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "AlkInputAction.h"
#include "AlkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "AlkSimpleListViewWidget.generated.h"

class UScrollBox;
class USizeBox;
class UUserWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UAlkSimpleListViewWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScrolledBP, float, Offset, float, OffsetFromEnd);
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UScrollBox* ScrollBox_Content;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USizeBox* SizeBox_Content;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUserWidget> m_EntryWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EOrientation> m_Orientation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseFixedWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FixedWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseFixedHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FixedHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseEdgeSnapping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EdgeSnappingDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_SmoothScrolling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_SmoothScrollingSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ScrollSpeedMouse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ScrollSpeedStick;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAlkInputAction> m_ScrollBackwardActions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FAlkInputAction> m_ScrollForwardActions;
    
public:
    UAlkSimpleListViewWidget();

    UFUNCTION(BlueprintCallable)
    void StopScroll();
    
    UFUNCTION(BlueprintCallable)
    void StartScrollForth();
    
    UFUNCTION(BlueprintCallable)
    void StartScrollBack();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToTop();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToBottom();
    
    UFUNCTION(BlueprintCallable)
    void ScrollTo(float _Offset);
    
    UFUNCTION(BlueprintCallable)
    void ScrollBy(float _Amount);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnScrolled(float _Offset, float _OffsetFromEnd);
    
    UFUNCTION()
    void HandleUserScrolled(float _Offset);
    
public:
    UFUNCTION(BlueprintPure)
    float GetScrollOffsetFromEnd() const;
    
    UFUNCTION(BlueprintPure)
    float GetScrollOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
};

