#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PopupPersistentDataTextInput.generated.h"

class UPersistentDataSubsystem;

UCLASS(EditInlineNew)
class G1R_API UPopupPersistentDataTextInput : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_CheckProfileInsteadOfSaveGame;
    
private:
    UPROPERTY()
    UPersistentDataSubsystem* m_PersistentDataSubsystem;
    
public:
    UPopupPersistentDataTextInput();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnNameIsEmpty_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNameAlreadyInUse_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCannotCreateMoreProfiles_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeBP();
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialization(bool CheckProfileInsteadOfSaveGame);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanUseName(const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AnErrorOcurred_BP();
    
};

