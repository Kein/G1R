#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "EGothicHUDBarVisibility.h"
#include "GameplayAttributeProgressBarWidget.generated.h"

class UAbilitySystemComponent;

UCLASS(Abstract, EditInlineNew)
class G1R_API UGameplayAttributeProgressBarWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeCurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeMaxValue;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeCurrentPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeInterpolatedPercent;
    
    UPROPERTY(BlueprintReadOnly)
    float m_GameplayAttributeCriticalPercent;
    
    UPROPERTY(EditAnywhere)
    float m_GameplayAttributeInterpolationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayAttribute m_CurrentValueAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayAttribute m_MaxValueAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayAttribute m_CriticalLevelPercentAttribute;
    
    UPROPERTY(EditAnywhere)
    TSet<FGameplayTag> m_GameplayTagsToListenTo;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeOnScreenOnDynamic;
    
    UPROPERTY(BlueprintReadOnly)
    EGothicHUDBarVisibility m_Visibility;
    
public:
    UGameplayAttributeProgressBarWidget();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION()
    void HandleHUDSettingsChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnNumberVisibilityChanged(bool _Visible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnMaxValueChanged(float OldValue, float NewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnGameplayTagCountChanged(FGameplayTag GameplayTag, int32 Count);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnCurrentValueChanged(float OldValue, float NewValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBarVisible();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBarHidden();
    
};

