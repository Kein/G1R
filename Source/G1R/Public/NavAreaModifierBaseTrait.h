#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "RegionTrait.h"
#include "NavAreaModifierBaseTrait.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UNavAreaModifierBaseTrait : public URegionTrait, public INavRelevantInterface {
    GENERATED_BODY()
public:
    UNavAreaModifierBaseTrait();


    // Fix for true pure virtual functions not being implemented
};

