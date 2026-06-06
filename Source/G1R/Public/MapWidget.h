#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GothicCommonActivatableWidget.h"
#include "MapMarkerArrayData.h"
#include "MapWidget.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UImage;
class UInputHintWidget_CommonUI;
class UMapCustomMarkerWidget;
class UMapData;
class USizeBox;
class UTexture2D;
class UUIMapConfigDefinition;

UCLASS(EditInlineNew)
class G1R_API UMapWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkerSelectorVisibilityChanged, bool, IsVisible);
    
    UPROPERTY(BlueprintAssignable)
    FOnMarkerSelectorVisibilityChanged OnMarkerSelectorVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* ImageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* ImageMap_Overlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UImage* ImageMap_Debug;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USizeBox* MapImageSizeBox;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsWorldMap;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsEmpty;
    
    UPROPERTY(BlueprintReadOnly)
    UUIMapConfigDefinition* m_ActiveMapData;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_PlayerPosMapOriginal;
    
    UPROPERTY(BlueprintReadOnly)
    FVector2D m_PlayerPosMapCorrected;
    
    UPROPERTY(BlueprintReadOnly)
    float m_PlayerPosAngle;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_MapDebugMode;
    
    UPROPERTY(BlueprintReadOnly)
    FMapMarkerArrayData m_CustomMarkers;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UCanvasPanel* CanvasPanel_CustomMarkers;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MarkerSelectorHoldTimer;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D m_DisableMarkerBorderPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HoldRemoveAllMarkersTimer;
    
    UPROPERTY(Instanced)
    UInputHintWidget_CommonUI* InputHint_Marker_RemoveAll;
    
private:
    UPROPERTY()
    UMapData* m_MapData;
    
    UPROPERTY(Transient)
    UTexture2D* m_TexPosCorrection;
    
    UPROPERTY(Instanced)
    UCanvasPanelSlot* m_MapPanelSlot;
    
public:
    UMapWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMarkerPositionBP();
    
private:
    UFUNCTION()
    void UpdateMapOffset(FVector2D& GameWorldPosNorm, bool RemoveOffset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMapInfoBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowMarkerSelectorBP(FVector2D WidgetPos);
    
    UFUNCTION(BlueprintCallable)
    bool ShowMakerSelector(FVector2D CursorPos);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDebugMode(bool IsDebugModeEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomMarker(FVector2D MarkerPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAllMarkers();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReloadCustomMarkers();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedMarker(FGameplayTag MarkerTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideMarkerSelectorBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddCustomMarkerBP(UMapCustomMarkerWidget* MarkerWidget);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddCustomMarker(FVector2D MarkerPos, FGameplayTag MarkerTag, bool ShowAddAnimation);
    
};

