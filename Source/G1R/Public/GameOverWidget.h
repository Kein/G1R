#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "GameOverWidget.generated.h"

class UCommonButtonBase;
class UPersistentDataSubsystem;

UCLASS(EditInlineNew, Config=Game)
class G1R_API UGameOverWidget : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool m_bIsSpecialReviveEnabled;
    
    UPROPERTY(BlueprintReadOnly)
    int32 m_ReviveCounter;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCommonButtonBase* m_ReviveButton;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UCommonButtonBase* Quit;
    
    UPROPERTY()
    UPersistentDataSubsystem* m_PersistentDataSubsystem;
    
public:
    UGameOverWidget();

    UFUNCTION(BlueprintCallable)
    void Revive();
    
    UFUNCTION(BlueprintCallable)
    void LoadLastSave();
    
    UFUNCTION(BlueprintPure)
    bool IsSpecialReviveEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsLoadButtonEnabled();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetLastSaveTime();
    
    UFUNCTION(BlueprintCallable)
    bool CheckLastSaveExists();
    
    UFUNCTION(BlueprintPure)
    bool CanRevive() const;
    
};

