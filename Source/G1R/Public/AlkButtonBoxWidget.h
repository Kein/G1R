#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "AlkButtonBoxWidget.generated.h"

class UHorizontalBox;

UCLASS(EditInlineNew)
class G1R_API UAlkButtonBoxWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FButtonClickedEventBP, FGameplayTag, GameplayTag);
    
    UPROPERTY(BlueprintAssignable)
    FButtonClickedEventBP m_OnButtonClickedBP;
    
    UPROPERTY(BlueprintAssignable)
    FButtonClickedEventBP m_OnButtonSecondaryClickedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UHorizontalBox* HorizontalBox_Buttons;
    
public:
    UAlkButtonBoxWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateButtonVisibilities(const FGameplayTagContainer& _RelevantButtonTags, bool _ExactMatch);
    
};

