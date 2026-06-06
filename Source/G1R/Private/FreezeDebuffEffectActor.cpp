#include "FreezeDebuffEffectActor.h"
#include "ProceduralMeshComponent.h"

AFreezeDebuffEffectActor::AFreezeDebuffEffectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CustomMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CustomMesh"));
}

void AFreezeDebuffEffectActor::GenerateExtraGeometry(UGothicSkeletalMeshComponent* Mesh) {
}


