#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionAnimMetaDataWrapper.h"
#include "MotionBlendSpaceMetaDataWrapper.generated.h"

UCLASS(EditInlineNew)
class MOTIONSYMPHONY_API UMotionBlendSpaceMetaDataWrapper : public UMotionAnimMetaDataWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector2D SampleSpacing;
    
    UMotionBlendSpaceMetaDataWrapper();

};

