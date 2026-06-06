#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCSpawnDebugProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCSpawnDebugProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCSpawnDebugProcessor();

    virtual void ConfigureQueries() override {  };
};

