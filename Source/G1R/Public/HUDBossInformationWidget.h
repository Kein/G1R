#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDBossInformationWidget.generated.h"

class AGothicCharacterState;

UCLASS(EditInlineNew)
class G1R_API UHUDBossInformationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacterState* m_BossCharState;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeCurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeMaxValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeCurrentPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeInterpolatedPercent;
    
    UPROPERTY(EditAnywhere)
    float m_GameplayAttributeInterpolationSpeed;
    
public:
    UHUDBossInformationWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateName(const FText& BossName);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ShowWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideWidget();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CloseWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CleanUp();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnMaxHealthChanged(float OldValue, float NewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCurrentHealthChanged(float OldValue, float NewValue);
    
};

