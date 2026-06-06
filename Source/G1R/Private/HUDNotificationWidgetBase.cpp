#include "HUDNotificationWidgetBase.h"

UHUDNotificationWidgetBase::UHUDNotificationWidgetBase() {
    this->InputHint = NULL;
    this->m_Importance = EHUDNotificationImportance::Medium;
    this->m_Group = EHUDNotificationGroup::None;
    this->m_DefaultDesiredShowTime = 7.00f;
    this->m_AllowedDuringConversations = true;
    this->m_AllowedDuringLooting = true;
}


void UHUDNotificationWidgetBase::RequestShowInputHint(const FKey& _Key, FName _RequestIdentifier) {
}

void UHUDNotificationWidgetBase::RequestHideInputHint(FName _RequestIdentifier) {
}


void UHUDNotificationWidgetBase::OnShowInputHint_Implementation(FName _RequestIdentifier) {
}


void UHUDNotificationWidgetBase::OnHideInputHint_Implementation(FName _RequestIdentifier) {
}

void UHUDNotificationWidgetBase::HideNotification(bool _DisableInput, bool _ForceHide) {
}

EHUDNotificationVisibilityState UHUDNotificationWidgetBase::GetNotificationVisibilityState() const {
    return EHUDNotificationVisibilityState::Hidden;
}

void UHUDNotificationWidgetBase::EnableInput() {
}

void UHUDNotificationWidgetBase::DisableInput() {
}

void UHUDNotificationWidgetBase::ConfirmNotificationHidden(bool _Forced) {
}


