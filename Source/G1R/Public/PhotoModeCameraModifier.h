#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "PhotoModeCameraModifier.generated.h"

class UPhotoModeManager;

UCLASS()
class G1R_API UPhotoModeCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UPhotoModeManager* m_PhotoModeManager;
    
public:
    UPhotoModeCameraModifier();

};

