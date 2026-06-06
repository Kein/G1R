#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "CommonActivatableWidget.h"
#include "EAlkMouseButton.h"
#include "EMainMenuState.h"
#include "SavedGamesPageWidget.generated.h"

class UDiscreteItemViewWidget;
class UProfileSlotInfo;
class USavedSlotInfo;

UCLASS(EditInlineNew)
class G1R_API USavedGamesPageWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDiscreteItemViewWidget* TileView_Saves;
    
    UPROPERTY(BlueprintReadOnly)
    UProfileSlotInfo* m_ProfileInfo;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<USavedSlotInfo*> m_ArraySlotInfo;
    
    UPROPERTY(BlueprintReadWrite)
    USavedSlotInfo* m_SelectedSlot;
    
    UPROPERTY(BlueprintReadWrite)
    EMainMenuState MenuState;
    
    UPROPERTY(BlueprintReadOnly)
    ECommonInputType m_CurrentInputType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumManualSaveSlots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumAutoSaveSlots;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_NumQuickSaveSlots;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsPlatformPC;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsModePermadeath;
    
public:
    USavedGamesPageWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void WhenSlotSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInfoBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartSavingSave(const FString& SaveName, bool isOverwritingSave);
    
    UFUNCTION(BlueprintCallable)
    void StartLoadingSave(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable)
    void StartDeletingSave(const FString& SaveName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTextInputBP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewSaveSlotClickedBP(EAlkMouseButton AlkMouseButton);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputTypeChanged(ECommonInputType CurrentInput);
    
public:
    UFUNCTION()
    void OnGameSaved();
    
    UFUNCTION()
    void OnCannotSave();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void NewSaveSlot();
    
    UFUNCTION(BlueprintCallable)
    bool IsProfileInPermaDeathMode();
    
    UFUNCTION(BlueprintCallable)
    bool CheckQuickSave(const FString& SaveName);
    
};

