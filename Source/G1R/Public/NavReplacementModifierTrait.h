#pragma once
#include "CoreMinimal.h"
#include "NavAreaModifierBaseTrait.h"
#include "ReplaceNavAreaPair.h"
#include "NavReplacementModifierTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UNavReplacementModifierTrait : public UNavAreaModifierBaseTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FReplaceNavAreaPair> AreasToReplace;
    
public:
    UNavReplacementModifierTrait();

};

