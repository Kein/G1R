#include "GothicLockedStreamingSourceActor.h"
#include "GothicLockedStreamingSourceComponent.h"

AGothicLockedStreamingSourceActor::AGothicLockedStreamingSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGothicLockedStreamingSourceComponent>(TEXT("OuterShape"));
    this->bShouldBlockOnSlowLoading = false;
    this->DefaultStreamingSource = CreateDefaultSubobject<UGothicLockedStreamingSourceComponent>(TEXT("DefaultStreamingSource"));
    this->OuterShapeComponent = (USphereComponent*)RootComponent;
    this->DefaultStreamingSource->SetupAttachment(RootComponent);
}


