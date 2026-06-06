#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCSpawnProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCSpawnProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCSpawnProcessor();

    virtual void ConfigureQueries() override {  };
};

