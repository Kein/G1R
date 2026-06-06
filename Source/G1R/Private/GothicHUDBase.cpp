#include "GothicHUDBase.h"
#include "GothicHUDConfiguration.h"

AGothicHUDBase::AGothicHUDBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->m_HUDConfiguration = CreateDefaultSubobject<UGothicHUDConfiguration>(TEXT("HUDConfiguration"));
    this->m_FocusWidget = NULL;
    this->m_bMousePositionWasManuallySetLastFrame = false;
    this->m_IfIsFirstFrame = true;
    this->m_HUDSubsystem = NULL;
}

void AGothicHUDBase::SetFocusWidget(UUserWidget* Widget) {
}

void AGothicHUDBase::PushFocusWidget(UUserWidget* Widget) {
}

UUserWidget* AGothicHUDBase::PopFocusWidget() {
    return NULL;
}

void AGothicHUDBase::OnMousePositionSet(int32 MouseX, int32 MouseY) {
}


UUserWidget* AGothicHUDBase::GetFocusWidget() const {
    return NULL;
}

void AGothicHUDBase::EndPlay(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AGothicHUDBase::DrawHUD() {
}


