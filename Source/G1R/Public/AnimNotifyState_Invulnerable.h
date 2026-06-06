#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_SetTagState.h"
#include "AnimNotifyState_Invulnerable.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_Invulnerable : public UAnimNotifyState_SetTagState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ApplyToNPCs;
    
    UAnimNotifyState_Invulnerable();

};

