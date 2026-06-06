#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_SetCinematicCamera.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SetCinematicCamera : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName m_CameraName;
    
public:
    UAnimNotify_SetCinematicCamera();

};

