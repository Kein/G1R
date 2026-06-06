#include "EditorIndoorDetectionTestActor.h"
#include "IndoorDetectionComponent.h"

AEditorIndoorDetectionTestActor::AEditorIndoorDetectionTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<UIndoorDetectionComponent>(TEXT("IndoorDetection"));
    this->bUpdateOnTick = true;
    this->IndoorDetectionComponent = (UIndoorDetectionComponent*)RootComponent;
}


