#include "DynamicNavObstacle.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

ADynamicNavObstacle::ADynamicNavObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->bIsEnabled = true;
    this->CachedReferenceComponent = NULL;
    this->CachedReferenceExtentScale = 1.00f;
}

void ADynamicNavObstacle::SetNavObstacleEnabled(bool bShouldBeEnabled) {
}

void ADynamicNavObstacle::OnRep_ObstacleExtends() {
}

void ADynamicNavObstacle::OnRep_IsEnabled() {
}

void ADynamicNavObstacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicNavObstacle, bIsEnabled);
    DOREPLIFETIME(ADynamicNavObstacle, ObstacleExtends);
}


