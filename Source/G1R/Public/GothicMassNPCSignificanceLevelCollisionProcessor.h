#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "GothicMassNPCSignificanceLevelCollisionProcessor.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UGothicMassNPCSignificanceLevelCollisionProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
    UGothicMassNPCSignificanceLevelCollisionProcessor();

    virtual void ConfigureQueries() override {  };
};

