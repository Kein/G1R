#pragma once
#include "CoreMinimal.h"
#include "GothicCharacterStateMassTrait.h"
#include "GothicMassSharedFragment_SignificanceParameters.h"
#include "GothicNPCStateMassTrait.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicNPCStateMassTrait : public UGothicCharacterStateMassTrait {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGothicMassSharedFragment_SignificanceParameters LODParams;
    
    UGothicNPCStateMassTrait();

};

