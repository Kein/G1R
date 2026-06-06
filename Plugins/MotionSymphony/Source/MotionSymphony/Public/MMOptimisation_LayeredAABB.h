#pragma once
#include "CoreMinimal.h"
#include "LayeredAABBStructure.h"
#include "MMOptimisationModule.h"
#include "MotionTraitField.h"
#include "MMOptimisation_LayeredAABB.generated.h"

UCLASS()
class MOTIONSYMPHONY_API UMMOptimisation_LayeredAABB : public UMMOptimisationModule {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FMotionTraitField, FLayeredAABBStructure> SearchStructure;
    
    UMMOptimisation_LayeredAABB();

};

