#include "GothicInvokerActor.h"
#include "Components/SceneComponent.h"
#include "GothicNavigationInvokerComponent.h"

AGothicInvokerActor::AGothicInvokerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->GothicNavigationInvokerComponent = CreateDefaultSubobject<UGothicNavigationInvokerComponent>(TEXT("GothicInvokerComponent"));
    this->NavigationConfigDefaultObject = NULL;
}

bool AGothicInvokerActor::HasFinishedNavMeshGeneration() const {
    return false;
}

AGothicInvokerActor* AGothicInvokerActor::CreateInvokerActor(const UObject* WorldContext, const FVector& SpawnLocation, const USpawnAIAgentDefinition* AIAgentSpawnDefinition, float InCustomInvokerGenerationRadius, bool bInOnlyUsedPreferredNavType) {
    return NULL;
}


