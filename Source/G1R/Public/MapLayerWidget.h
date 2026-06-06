#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateTypes.h"
#include "Blueprint/UserWidget.h"
#include "EMapLayerFilterListState.h"
#include "Templates/SubclassOf.h"
#include "MapLayerWidget.generated.h"

class UCheckBoxWidget;
class UUIMapLayerDefinition;

UCLASS(EditInlineNew)
class G1R_API UMapLayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    TArray<TSubclassOf<UUIMapLayerDefinition>> m_LayerDefinitionClasses;
    
private:
    UPROPERTY(Instanced)
    UCheckBoxWidget* m_FilterBoundTo;
    
public:
    UMapLayerWidget();

    UFUNCTION(BlueprintCallable)
    void SetParentMapTag(FGameplayTag Tag);
    
    UFUNCTION()
    void OnSetCheckedState(ECheckBoxState OldCheckedState, ECheckBoxState NewCheckedState);
    
    UFUNCTION()
    FGameplayTag GetMapTag();
    
    UFUNCTION(BlueprintCallable)
    EMapLayerFilterListState GetFilterState();
    
    UFUNCTION()
    FText GetFilterName();
    
};

