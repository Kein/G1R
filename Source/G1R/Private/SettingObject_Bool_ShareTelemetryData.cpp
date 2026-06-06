#include "SettingObject_Bool_ShareTelemetryData.h"

USettingObject_Bool_ShareTelemetryData::USettingObject_Bool_ShareTelemetryData() {
    this->m_DisplayName = FText::FromString(TEXT("Share telemetry data"));
    this->m_DefaultValue = true;
}


