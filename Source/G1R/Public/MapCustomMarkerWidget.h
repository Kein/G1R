#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "MapCustomMarkerWidget.generated.h"

class UCanvasPanel;
class UMapWidget;

UCLASS(EditInlineNew)
class G1R_API UMapCustomMarkerWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_MarkerPosition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D m_MarkerSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTag m_MarkerTag;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* m_PanelParent;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMapWidget* m_MapWidgetOwner;
    
    UPROPERTY(BlueprintReadWrite)
    bool m_RemovingMarkerFinished;
    
public:
    UMapCustomMarkerWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartRemovingMarker();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMarkerTag(FGameplayTag MarkerTag);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void InitializationBP(bool ShowAddAnimation);
    
public:
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetMarkerTag();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMarkerPos();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void FinishedRemovingMarker();
    
};

