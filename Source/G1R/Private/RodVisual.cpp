#include "RodVisual.h"
#include "Components/SkeletalMeshComponent.h"

ARodVisual::ARodVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    this->m_MeshComp = (USkeletalMeshComponent*)RootComponent;
    this->m_Bait = NULL;
    this->m_BaitSocketName = TEXT("BaitSocket");
    this->m_Widget = NULL;
}


