#include "GothicUltraDynamicSky.h"
#include "Net/UnrealNetwork.h"

AGothicUltraDynamicSky::AGothicUltraDynamicSky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultLightUpdatePeriod = 0.05f;
    this->TransitionTimeA = 0.00f;
    this->TransitionTimeB = 0.00f;
    this->TransitioningTime = false;
    this->TransitionEasingExponent = 0.00f;
    this->TransitionDuration = 0.00f;
    this->TransitionDaysCounted = 0;
    this->TransitionCanGoBackwards = false;
    this->DayNightIntensity = 0.00f;
    this->UpdateRectLightsPerFrame = 8;
    this->ControlSkyAtmosphereSettings = false;
}

void AGothicUltraDynamicSky::UpdateRectLights() {
}


void AGothicUltraDynamicSky::UnregisterRectLight(TScriptInterface<IGothicDynamicDayLight> RectLight) {
}

void AGothicUltraDynamicSky::Tick(float DeltaSeconds) {
}


void AGothicUltraDynamicSky::RegisterRectLight(TScriptInterface<IGothicDynamicDayLight> RectLight) {
}




float AGothicUltraDynamicSky::GetLightUpdatePeriod() {
    return 0.0f;
}



void AGothicUltraDynamicSky::BeginPlay() {
}

void AGothicUltraDynamicSky::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGothicUltraDynamicSky, TransitioningTime);
}


