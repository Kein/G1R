#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCFinalSignificanceProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCFinalSignificanceProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCFinalSignificanceProcessor();

    virtual void ConfigureQueries() override {  };
};

