#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SleepUIMidsectionWidget.generated.h"

UCLASS(EditInlineNew)
class USleepUIMidsectionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_GivesMaxHealth;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_GivesMaxMana;
    
    UPROPERTY(BlueprintReadOnly)
    float m_CurrentHealthGain;
    
    UPROPERTY(BlueprintReadOnly)
    float m_CurrentManaGain;
    
public:
    USleepUIMidsectionWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshAttributeValues(int32 _HoursSlept);
    
};

