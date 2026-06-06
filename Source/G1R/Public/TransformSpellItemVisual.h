#pragma once
#include "CoreMinimal.h"
#include "SpellItemVisual.h"
#include "TransformSpellItemVisual.generated.h"

UCLASS()
class G1R_API ATransformSpellItemVisual : public ASpellItemVisual {
    GENERATED_BODY()
public:
    ATransformSpellItemVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnScrollBurn();
    
};

