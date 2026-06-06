#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCBaseSignificanceProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCBaseSignificanceProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCBaseSignificanceProcessor();

    virtual void ConfigureQueries() override {  };
};

