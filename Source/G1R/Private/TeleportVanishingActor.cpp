#include "TeleportVanishingActor.h"
#include "Components/SphereComponent.h"

ATeleportVanishingActor::ATeleportVanishingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->m_CollisionComp = (USphereComponent*)RootComponent;
    this->mIsDebugEnabled = false;
}







void ATeleportVanishingActor::OnOverlapEndsServer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATeleportVanishingActor::OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATeleportVanishingActor::MulticastTeleportStartVanishing_Implementation() {
}

void ATeleportVanishingActor::MulticastTeleportStarted_Implementation() {
}

void ATeleportVanishingActor::MulticastTeleportFinished_Implementation() {
}

void ATeleportVanishingActor::MulticastTeleportActivate_Implementation(const AGothicCharacter* Character, float Radius, float CastTime) {
}

void ATeleportVanishingActor::MulticastRemove_Implementation(const FGameplayCueParameters& Parameters) {
}

void ATeleportVanishingActor::MulticastCancel_Implementation(float totalCastingTime) {
}

void ATeleportVanishingActor::MulticastActorRemoved_Implementation(const AGothicCharacter* Player) {
}

void ATeleportVanishingActor::MulticastActorAdded_Implementation(const AGothicCharacter* Player) {
}


