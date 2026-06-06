#pragma once
#include "CoreMinimal.h"
#include "Input/CommonUIInputSettings.h"
#include "GameplayTagContainer.h"
#include "AlkInputAction.h"
#include "GothicCommonActivatableWidget.h"
#include "MapMain.generated.h"

class UGameTimeSubsystem;
class UInputHintWidget_CommonUI;
class UMapData;
class UMapWidget;

UCLASS(EditInlineNew)
class G1R_API UMapMain : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMapWidget* Map_World;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UMapWidget* Map_Area;
    
    UPROPERTY(EditAnywhere)
    FCommonAnalogCursorSettings AnalogCursorSettings;
    
    UPROPERTY(BlueprintReadOnly)
    UGameTimeSubsystem* GameTimeSubsystem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction CloseInputAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction DebugModeAction;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UInputHintWidget_CommonUI* InputHint_Marker_RemoveAll;
    
private:
    UPROPERTY()
    UMapData* m_MapData;
    
public:
    UMapMain();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ToggleDebugModeBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenBlankMainMapBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenAreaMapBP();
    
public:
    UFUNCTION(BlueprintCallable)
    bool OpenAreaMap(FGameplayTag TagMap);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsAreaUnlocked(const FGameplayTag AreaTag) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseWidgetBP();
    
};

