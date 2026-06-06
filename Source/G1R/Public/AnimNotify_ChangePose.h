#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_ChangePose.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_ChangePose : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_NewPose;
    
public:
    UAnimNotify_ChangePose();

};

