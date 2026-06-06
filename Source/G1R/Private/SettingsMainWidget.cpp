#include "SettingsMainWidget.h"
#include "Templates/SubclassOf.h"

USettingsMainWidget::USettingsMainWidget() {
    this->SettingsMessageWidget = NULL;
    this->m_Context = ESettingsMainWidget_Context::None;
}

void USettingsMainWidget::SetSettingsContext(ESettingsMainWidget_Context _Context) {
}


FString USettingsMainWidget::GetCLVersion() {
    return TEXT("");
}

void USettingsMainWidget::FocusActiveButton() {
}

void USettingsMainWidget::CreatePageButtons(UWidgetSwitcher* _PagesSwitcher, TSubclassOf<USettingsPageButtonWidget> _ButtonClass, UPanelWidget* _ButtonPanel) {
}

void USettingsMainWidget::ClearActiveButton() {
}


