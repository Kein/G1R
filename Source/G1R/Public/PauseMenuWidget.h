#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AlkInputAction.h"
#include "GothicCommonActivatableWidget.h"
#include "PauseMenuWidget.generated.h"

class UCommonButtonBase;
class UPersistentDataSubsystem;

UCLASS(EditInlineNew)
class G1R_API UPauseMenuWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCommonButtonBase* QuitButton;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_LoadSaveBlockTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAlkInputAction CloseInputAction;
    
    UPROPERTY()
    UPersistentDataSubsystem* m_PersistentDataSubsystem;
    
public:
    UPauseMenuWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool IsSavingEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingEnabled();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void CloseWidgetBP();
    
};

