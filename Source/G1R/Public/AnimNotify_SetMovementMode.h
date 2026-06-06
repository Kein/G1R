#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AnimNotify_Base.h"
#include "AnimNotify_SetMovementMode.generated.h"

UCLASS(CollapseCategories)
class G1R_API UAnimNotify_SetMovementMode : public UAnimNotify_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EMovementMode> m_MovementMode;
    
    UAnimNotify_SetMovementMode();

};

