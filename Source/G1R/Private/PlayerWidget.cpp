#include "PlayerWidget.h"
#include "GothicInputMarvinCheatManager.h"
#include "Templates/SubclassOf.h"

UPlayerWidget::UPlayerWidget() {
    this->W_HealthBar = NULL;
    this->W_ManaBar = NULL;
    this->W_OxygenBar = NULL;
    this->SuperArmorBar = NULL;
    this->W_ObjectInteraction = NULL;
    this->W_AmmoLeft = NULL;
    this->NewLogEntrySound = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_Ready = false;
    this->m_CastingMaxTime = 0.00f;
    this->m_NumArrows = 0;
    this->m_TimeToDrawSecondaryWeapon = 1.00f;
    this->ManagementMainBPClass = NULL;
    this->Stack_GeneralMenu = NULL;
    this->Stack_GeneralPopup = NULL;
    this->Stack_PauseMenu = NULL;
    this->AreBindingsInitialized = false;
    this->m_GameOverWidgetClass = NULL;
    this->m_GameOverWidget = NULL;
    this->MarvinCheatManager = CreateDefaultSubobject<UGothicInputMarvinCheatManager>(TEXT("MarvinCheatManager"));
}

void UPlayerWidget::UpdateUIMenuController() {
}


void UPlayerWidget::UpdateData() {
}


void UPlayerWidget::SetDefaultInputConfig() {
}

void UPlayerWidget::QuickSave() {
}

void UPlayerWidget::QuickLoad() {
}

void UPlayerWidget::OpenMapMenu() {
}

void UPlayerWidget::OpenManagementPage(FGameplayTag _TabTag, FGameplayTag _FilterTag, const UObject* _Item) {
}



void UPlayerWidget::HUDOxygenBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const {
}

void UPlayerWidget::HUDManaBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const {
}

void UPlayerWidget::HUDHealthBarVisibilityUpdate(EGothicHUDBarVisibility HUDBarVisibility) const {
}

UCommonActivatableWidgetStack* UPlayerWidget::GetStackPauseMenus() {
    return NULL;
}

UCommonActivatableWidgetStack* UPlayerWidget::GetStackGeneralMenus() {
    return NULL;
}

void UPlayerWidget::CloseManagementScreen() {
}

void UPlayerWidget::CallInteractOpenContainerClickItem(int32 ItemPos, EInventoryTypes InventorySlot) {
}









bool UPlayerWidget::AreAnyPauseMenusOpen() const {
    return false;
}

bool UPlayerWidget::AreAnyMenusOpen() const {
    return false;
}

UUserWidget* UPlayerWidget::AddWidgetToPauseMenuStack(TSubclassOf<UCommonActivatableWidget> _WidgetClass) {
    return NULL;
}

UUserWidget* UPlayerWidget::AddWidgetToGeneralPopupStack(TSubclassOf<UCommonActivatableWidget> NewWidget) {
    return NULL;
}

UUserWidget* UPlayerWidget::AddWidgetToGeneralMenuStack(TSubclassOf<UCommonActivatableWidget> NewWidget) {
    return NULL;
}


