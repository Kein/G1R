#include "GameplayObjectWithEditorIcon.h"
#include "Components/SceneComponent.h"

AGameplayObjectWithEditorIcon::AGameplayObjectWithEditorIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComp"));
    this->m_SceneComponent = (USceneComponent*)RootComponent;
}


