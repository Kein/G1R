#include "HUDNotificationController.h"
#include "Templates/SubclassOf.h"

UHUDNotificationController::UHUDNotificationController() {
    this->m_NotificationMainWidget = NULL;
}

void UHUDNotificationController::SetEnabled(bool _Enabled) {
}

bool UHUDNotificationController::RemoveNotification(FHUDNotificationHandle _Handle) {
    return false;
}

FString UHUDNotificationController::GetBlueprintName() {
    return TEXT("");
}

UHUDNotificationController* UHUDNotificationController::Get(const UObject* _WorldContextObject) {
    return NULL;
}

FHUDNotificationHandle UHUDNotificationController::AddNotificationSoft(const TSoftClassPtr<UHUDNotificationWidgetBase> _SoftWidgetClass, FInstancedStruct _Data, double _DesiredTimeOverride) {
    return FHUDNotificationHandle{};
}

FHUDNotificationHandle UHUDNotificationController::AddNotification(const TSubclassOf<UHUDNotificationWidgetBase> _WidgetClass, FInstancedStruct _Data, double _DesiredTimeOverride) {
    return FHUDNotificationHandle{};
}


