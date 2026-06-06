#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCHeavyLoadDetectionProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCHeavyLoadDetectionProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCHeavyLoadDetectionProcessor();

    virtual void ConfigureQueries() override {  };
};

