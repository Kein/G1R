#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GothicCameraModifier.h"
#include "GothicCameraModifierTransition.generated.h"

UCLASS()
class G1R_API UGothicCameraModifierTransition : public UGothicCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FRotator m_OriginalRotation;
    
public:
    UGothicCameraModifierTransition();

};

