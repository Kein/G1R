#include "ProjectileVisual.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GothicFXComponent.h"
#include "HitSphereCollisionComponent.h"
#include "PerceptionComponent.h"
#include "Templates/SubclassOf.h"

AProjectileVisual::AProjectileVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->RootComponent = CreateDefaultSubobject<UHitSphereCollisionComponent>(TEXT("HitComp"));
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("FXComponent"));
    this->m_ProjectileDefinition = NULL;
    this->m_CollisionComp = (UHitSphereCollisionComponent*)RootComponent;
    this->m_MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->m_PerceptionComponent = CreateDefaultSubobject<UPerceptionComponent>(TEXT("PerceptionComp"));
    this->m_LastTarget = NULL;
    this->m_ProjectileProfileName = TEXT("ProjectileProfile");
    this->m_FXComponent->SetupAttachment(RootComponent);
}

AActor* AProjectileVisual::SpawnObject(TSubclassOf<AActor> Actor, FVector position, FRotator Rotation) {
    return NULL;
}

void AProjectileVisual::SetVelocity(const FVector& Velocity) {
}

void AProjectileVisual::OnProjectileEndPlay_Implementation() {
}

void AProjectileVisual::OnProjectileCollide_Script_Implementation() {
}

void AProjectileVisual::OnProjectileCollide(const FHitResult& HitResult) {
}

void AProjectileVisual::OnProjectileBeginPlay_Implementation() {
}

void AProjectileVisual::OnOverlapEndsServer_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AProjectileVisual::OnOverlapBeginServer_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AProjectileVisual::OnHitServer_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AProjectileVisual::Initialize(const FVector& Target, float Speed, float Gravity, AActor* TargetActor, bool hasDirectTrace, bool IsTargetVisible) {
}

void AProjectileVisual::IncrementHitCounter() const {
}

TSubclassOf<UWeaponDefinition> AProjectileVisual::GetWeaponDefinition() const {
    return NULL;
}

UGothicFXComponent* AProjectileVisual::GetFXComponent() const {
    return NULL;
}

UAbilitySystemComponent* AProjectileVisual::GetAbilitySystemComponent() const {
    return NULL;
}

void AProjectileVisual::ForceDestroy_Scriptable_Implementation() {
}


