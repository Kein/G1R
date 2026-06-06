#include "EditorNavigationInvoker.h"
#include "Components/SphereComponent.h"
#include "GothicNavigationInvokerComponent.h"

AEditorNavigationInvoker::AEditorNavigationInvoker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->Invoker = CreateDefaultSubobject<UGothicNavigationInvokerComponent>(TEXT("GothicInvoker"));
    this->SphereComponent = (USphereComponent*)RootComponent;
}


