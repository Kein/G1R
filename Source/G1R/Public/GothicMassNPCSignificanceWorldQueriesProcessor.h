#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCSignificanceWorldQueriesProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCSignificanceWorldQueriesProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCSignificanceWorldQueriesProcessor();

    virtual void ConfigureQueries() override {  };
};

