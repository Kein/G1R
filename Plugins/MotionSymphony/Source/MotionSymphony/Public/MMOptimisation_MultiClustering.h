#pragma once
#include "CoreMinimal.h"
#include "MMOptimisationModule.h"
#include "MotionTraitField.h"
#include "PoseLookupTable.h"
#include "MMOptimisation_MultiClustering.generated.h"

UCLASS()
class MOTIONSYMPHONY_API UMMOptimisation_MultiClustering : public UMMOptimisationModule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 KMeansClusterCount;
    
    UPROPERTY(EditAnywhere)
    int32 KMeansMaxIterations;
    
    UPROPERTY(EditAnywhere)
    int32 DesiredLookupTableSize;
    
    UPROPERTY()
    TMap<FMotionTraitField, FPoseLookupTable> PoseLookupSets;
    
    UMMOptimisation_MultiClustering();

};

