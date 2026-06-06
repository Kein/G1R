#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "Templates/SubclassOf.h"
#include "AnimNotify_CameraShake.generated.h"

class UCameraShakeBase;

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_CameraShake : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShakeBase> m_CameraShake;
    
    UPROPERTY(EditAnywhere)
    bool m_OnlyTriggerOnPlayerCharacter;
    
public:
    UAnimNotify_CameraShake();

};

