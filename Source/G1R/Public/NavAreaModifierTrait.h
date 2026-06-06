#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationDataResolution.h"
#include "NavAreaModifierBaseTrait.h"
#include "Templates/SubclassOf.h"
#include "NavAreaModifierTrait.generated.h"

class UNavArea;

UCLASS(EditInlineNew)
class G1R_API UNavAreaModifierTrait : public UNavAreaModifierBaseTrait {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(EditAnywhere)
    ENavigationDataResolution NavigationDataResolution;
    
public:
    UNavAreaModifierTrait();

};

