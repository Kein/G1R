#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCSignificanceGameThreadWorldQueriesProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCSignificanceGameThreadWorldQueriesProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCSignificanceGameThreadWorldQueriesProcessor();

    virtual void ConfigureQueries() override {  };
};

