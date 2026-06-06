#include "FreezeVisual.h"
#include "ProceduralMeshComponent.h"

AFreezeVisual::AFreezeVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CustomMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("CustomMesh"));
}

void AFreezeVisual::GenerateExtraGeometry(UGothicSkeletalMeshComponent* Mesh) {
}


