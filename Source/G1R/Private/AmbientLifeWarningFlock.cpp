#include "AmbientLifeWarningFlock.h"
#include "Components/SceneComponent.h"
#include "AmbientPerceptionComponent.h"
#include "Templates/SubclassOf.h"

AAmbientLifeWarningFlock::AAmbientLifeWarningFlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_AmbientConfigDefinition = NULL;
    this->m_RootComponent = (USceneComponent*)RootComponent;
    this->m_PerceptionComponent = CreateDefaultSubobject<UAmbientPerceptionComponent>(TEXT("PerceptionComponent"));
}

void AAmbientLifeWarningFlock::Server_SpawnCreature_Implementation(const FTransform Transform, TSubclassOf<ACharacter> charToSpawn, UWorld* World) {
}

void AAmbientLifeWarningFlock::OnCreatureDestroyed(AActor* Target) {
}

void AAmbientLifeWarningFlock::HandlePerceptionGained(const FRememberedPerception& Perception, const FPerceptionShortTermMemory& Memory) {
}


