#include "WorldPointManagerConfig.h"
#include "Templates/SubclassOf.h"

UWorldPointManagerConfig::UWorldPointManagerConfig() {
}

void UWorldPointManagerConfig::AddWorldScene(FName Name) {
}

void UWorldPointManagerConfig::AddWorldRadius(float Radius) {
}

void UWorldPointManagerConfig::AddWorldPosition(FRotator Rotator, FVector position) {
}

void UWorldPointManagerConfig::AddWorldPointWithScript(FName Name, FRotator Rotator, FVector position, TSubclassOf<UWorldPointScript> worldScript) {
}

void UWorldPointManagerConfig::AddWorldPoint(FName Name) {
}

void UWorldPointManagerConfig::AddScriptDefinition(TSubclassOf<UWorldPointScript> worldScript) {
}

void UWorldPointManagerConfig::AddProxyPoint(const int32 ID, const FRotator& Rotator, const FVector& position, const FName& Mesh, const FRotator& extraRotator, const FVector& extraPos) {
}

void UWorldPointManagerConfig::AddPayload(UObject* Payload) {
}

void UWorldPointManagerConfig::AddActorTransform(FRotator Rotator, FVector position) {
}


