#include "GothicFluxSubsystem.h"

UGothicFluxSubsystem::UGothicFluxSubsystem() {
}

void UGothicFluxSubsystem::UpdateActiveActor(const TScriptInterface<IGothicFluxActivable>& FluxActivable) {
}

void UGothicFluxSubsystem::UnregisterSurface(const TScriptInterface<IGothicFluxActivable>& FluxActivable) {
}

void UGothicFluxSubsystem::RegisterSurface(const TScriptInterface<IGothicFluxActivable>& FluxActivable) {
}

bool UGothicFluxSubsystem::IsAnySurfaceActive() const {
    return false;
}

AActor* UGothicFluxSubsystem::GetSurfaceActiveActor() {
    return NULL;
}

UGothicFluxSubsystem* UGothicFluxSubsystem::GetGameFlux(UObject* WorldContextObject) {
    return NULL;
}


