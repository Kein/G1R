#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "MapFilterListWidget.generated.h"

class UCheckBoxWidget;
class UVerticalBox;
class UWidget;

UCLASS(EditInlineNew)
class G1R_API UMapFilterListWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UCheckBoxWidget> m_CheckBoxWidgetClassBP;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UVerticalBox* VerticalBox_FiltersList;
    
public:
    UMapFilterListWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeFiltersListBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeFiltersList(TArray<UWidget*> LayerList, FGameplayTag MapTag);
    
};

