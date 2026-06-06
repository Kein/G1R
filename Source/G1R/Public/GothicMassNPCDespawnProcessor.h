#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCDespawnProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCDespawnProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCDespawnProcessor();

    virtual void ConfigureQueries() override {  };
};

