#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_OverrideRotationWithMovementRotation.generated.h"

class AGothicCharacter;

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_OverrideRotationWithMovementRotation : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(EditAnywhere)
    bool m_DisableRootMotion;
    
public:
    UAnimNotifyState_OverrideRotationWithMovementRotation();

};

