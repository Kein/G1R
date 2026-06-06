#include "StatEntryWidget.h"

UStatEntryWidget::UStatEntryWidget() {
    this->m_ShowIcon = true;
    this->m_Icon = NULL;
    this->m_StatType = EStatEntryWidget_StatType::Attribute;
    this->m_IsSurvivalModeExclusive = false;
    this->m_SkillType = EStatEntryWidget_SkillType::Binary;
    this->m_MasteryLevelAsBinarySkill = false;
    this->m_MasteryLevelToShow = EStatEntryWidget_MasteryLevel::Untrained;
    this->m_HideWhenUntrained = false;
    this->m_HideWhenMissing = false;
    this->m_UseFixedWidth = true;
    this->m_FixedWidth = 230.00f;
    this->m_CanBeConsideredFirst = true;
    this->m_IsSelected = false;
    this->m_IsSkillLearned = false;
    this->m_MasteryLevel = 0;
    this->m_AttributeValue = 0.00f;
    this->m_IsAttributeMaxValueOverridden = false;
    this->m_AttributeMaxValue = 0.00f;
}


void UStatEntryWidget::OverrideAttributeMaxValue(float _Value) {
}



bool UStatEntryWidget::IsUnseen() const {
    return false;
}

bool UStatEntryWidget::IsAllowedToBeShown() const {
    return false;
}


UTexture2D* UStatEntryWidget::GetMasteryIcon(int32 _MasteryLevel) const {
    return NULL;
}

void UStatEntryWidget::ClearAttributeMaxValueOverride() {
}


