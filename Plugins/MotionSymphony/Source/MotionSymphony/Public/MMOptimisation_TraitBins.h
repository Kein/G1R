#pragma once
#include "CoreMinimal.h"
#include "MMOptimisationModule.h"
#include "MotionTraitField.h"
#include "PoseBin.h"
#include "MMOptimisation_TraitBins.generated.h"

UCLASS()
class MOTIONSYMPHONY_API UMMOptimisation_TraitBins : public UMMOptimisationModule {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FMotionTraitField, FPoseBin> PoseBins;
    
    UMMOptimisation_TraitBins();

};

