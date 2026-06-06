#include "LightweightSceneCapture2D.h"
#include "BFGLightweightSceneCaptureComponent.h"

ALightweightSceneCapture2D::ALightweightSceneCapture2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBFGLightweightSceneCaptureComponent>(TEXT("NewSceneCaptureComponent2D"))) {
    const FProperty* p_CaptureComponent2D = GetClass()->FindPropertyByName("CaptureComponent2D");
    (*p_CaptureComponent2D->ContainerPtrToValuePtr<USceneCaptureComponent2D*>(this))->SetupAttachment(RootComponent);
}


