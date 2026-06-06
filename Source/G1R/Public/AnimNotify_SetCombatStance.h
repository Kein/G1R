#pragma once
#include "CoreMinimal.h"
#include "AnimNotify_Base.h"
#include "ECombatStance.h"
#include "AnimNotify_SetCombatStance.generated.h"

UCLASS(CollapseCategories)
class UAnimNotify_SetCombatStance : public UAnimNotify_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ECombatStance m_Stance;
    
public:
    UAnimNotify_SetCombatStance();

};

