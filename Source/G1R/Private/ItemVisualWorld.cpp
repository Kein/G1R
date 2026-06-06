#include "ItemVisualWorld.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "BuoyantForceComponent.h"
#include "GothicFXComponent.h"
#include "Net/UnrealNetwork.h"
#include "PerceptionComponent.h"

AItemVisualWorld::AItemVisualWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBoxComponent>(TEXT("ItemCollisionComp"))) {
    this->CameraComponent = NULL;
    this->m_SetupCollisions = false;
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("FXComponent"));
    this->m_PerceptionComponent = CreateDefaultSubobject<UPerceptionComponent>(TEXT("Perception Component"));
    this->m_ItemCount = 1;
    this->m_WorldItemDefinition = NULL;
    this->m_FloatingMovingDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("Floating direction"));
    this->m_CollisionComp = (UBoxComponent*)RootComponent;
    this->m_BallisticUnrealComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("BallisticUnreal"));
    this->m_RotatingUnrealComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingUnrealComp"));
    this->m_MinTumbleSpeed = 150.00f;
    this->m_MaxTumbleSpeed = 450.00f;
    this->m_BuoyancyForceComp = CreateDefaultSubobject<UBuoyantForceComponent>(TEXT("Buoyancy Force"));
    this->m_Switch = false;
    this->m_IsNpc = false;
    this->m_BuoyancyForceComp->SetupAttachment(RootComponent);
    this->m_FXComponent->SetupAttachment(RootComponent);
    this->m_FloatingMovingDirection->SetupAttachment(m_SceneComponent);
}

void AItemVisualWorld::SetupCollisions() const {
}

void AItemVisualWorld::SetDrop(float Rotate, bool useImpulse, const FVector& Impulse) {
}

void AItemVisualWorld::PutToSleep() {
}

void AItemVisualWorld::OnRep_WorldItemDefinition() {
}

void AItemVisualWorld::OnPutToSleepCallBack(UPrimitiveComponent* InComp, FName InBoneName) {
}

void AItemVisualWorld::OnProjectileStop_Implementation(const FHitResult& ImpactResult) {
}

void AItemVisualWorld::OnProjectileBounce_Implementation(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void AItemVisualWorld::HandleCollisionAfterDrop(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UItemDefinition* AItemVisualWorld::GetItemDefinition() const {
    return NULL;
}

UBoxComponent* AItemVisualWorld::GetCollisionComponent() const {
    return NULL;
}


void AItemVisualWorld::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemVisualWorld, m_ReplicatedWorldData);
}


