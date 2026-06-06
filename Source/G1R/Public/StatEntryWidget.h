#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "EStatEntryWidget_MasteryLevel.h"
#include "EStatEntryWidget_SkillType.h"
#include "EStatEntryWidget_StatType.h"
#include "StatEntryWidget.generated.h"

class UTexture2D;

UCLASS(EditInlineNew)
class G1R_API UStatEntryWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ShowIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* m_Icon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStatEntryWidget_StatType m_StatType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsSurvivalModeExclusive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayAttribute m_Attribute;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayAttribute m_MaxAttribute;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> m_HideWhenIsEqualToAny;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_GameplayTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStatEntryWidget_SkillType m_SkillType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_MasteryLevelAsBinarySkill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EStatEntryWidget_MasteryLevel m_MasteryLevelToShow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HideWhenUntrained;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HideWhenMissing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<int32, UTexture2D*> m_MasteryIcons;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_UseFixedWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    double m_FixedWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CanBeConsideredFirst;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<float, FText> m_ChangeTextForSelectedValues;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_IsSelected;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_DisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_MasteryDisplayName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_MasteryDescription;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_IsSkillLearned;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 m_MasteryLevel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_AttributeValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool m_IsAttributeMaxValueOverridden;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_AttributeMaxValue;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTag m_SkillMasteryTag;
    
public:
    UStatEntryWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateValue();
    
    UFUNCTION(BlueprintCallable)
    void OverrideAttributeMaxValue(float _Value);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeselected();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUnseen() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool IsAllowedToBeShown() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FVector2D GetUMGSize() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UTexture2D* GetMasteryIcon(int32 _MasteryLevel) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearAttributeMaxValueOverride();
    
};

