#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InstancedStruct.h"
#include "AlkUserWidget.h"
#include "EHUDNotificationGroup.h"
#include "EHUDNotificationImportance.h"
#include "EHUDNotificationVisibilityState.h"
#include "HUDNotificationWidgetBase.generated.h"

class UInputHintWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UHUDNotificationWidgetBase : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInputHintWidget* InputHint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHUDNotificationImportance m_Importance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHUDNotificationGroup m_Group;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_DefaultDesiredShowTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_AllowedDuringConversations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_AllowedDuringLooting;
    
public:
    UHUDNotificationWidgetBase();

    UFUNCTION(BlueprintImplementableEvent)
    void SetData(FInstancedStruct _Data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestShowInputHint(const FKey& _Key, FName _RequestIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void RequestHideInputHint(FName _RequestIdentifier);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowNotification();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnShowInputHint(FName _RequestIdentifier);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideNotification(bool _ForceHide);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnHideInputHint(FName _RequestIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void HideNotification(bool _DisableInput, bool _ForceHide);
    
    UFUNCTION(BlueprintPure)
    EHUDNotificationVisibilityState GetNotificationVisibilityState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableInput();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ConfirmNotificationHidden(bool _Forced);
    
};

