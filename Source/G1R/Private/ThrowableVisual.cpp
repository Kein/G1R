#include "ThrowableVisual.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AThrowableVisual::AThrowableVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->m_RotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComp"));
    this->m_MeshComp->SetupAttachment(RootComponent);
}


FGameplayTag AThrowableVisual::GetImpactType_Scriptable_Implementation() {
    return FGameplayTag{};
}


