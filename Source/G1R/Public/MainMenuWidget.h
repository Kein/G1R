#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SaveGamePublicData.h"
#include "MainMenuWidget.generated.h"

class UCommonButtonBase;
class UTextBlock;
class UVerticalBox;
class UWidget;

UCLASS(EditInlineNew)
class G1R_API UMainMenuWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_StartWithInputEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InitialRepeatDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RepeatDelay;
    
    UPROPERTY()
    int32 m_MostRecentProfileId;
    
    UPROPERTY()
    FSaveGamePublicData m_MostRecentSlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShowMultiplayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCommonButtonBase* QuitButton;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* TextBlock_UserName;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* VerticalBox_Buttons;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ButtonPosition;
    
public:
    UMainMenuWidget();

    UFUNCTION()
    void StopSelect();
    
    UFUNCTION()
    void StartSelectUp();
    
    UFUNCTION()
    void StartSelectDown();
    
    UFUNCTION()
    void SelectUp();
    
    UFUNCTION(BlueprintCallable)
    void SelectFirst();
    
    UFUNCTION()
    void SelectDown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshButtonFocus();
    
    UFUNCTION(BlueprintCallable)
    void OnContinueClicked();
    
    UFUNCTION()
    void NativeOnDeactivated();
    
    UFUNCTION()
    void NativeOnActivated();
    
    UFUNCTION(BlueprintCallable)
    bool IsContinueEnabled();
    
    UFUNCTION(BlueprintPure)
    UWidget* GetFirstButton() const;
    
public:
    UFUNCTION()
    UVerticalBox* GetButtonsBox();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CreateDemoProfile();
    
    UFUNCTION(BlueprintCallable)
    void CleanAllProfiles();
    
    UFUNCTION(BlueprintCallable)
    void CheckEmptyProfilesAndDelete();
    
    UFUNCTION(BlueprintCallable)
    bool ActivateDemoProfile();
    
};

