#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchBasis.h"
#include "EDistanceMatchType.h"
#include "TagPoint.h"
#include "Tag_DistanceMatch.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MOTIONSYMPHONY_API UTag_DistanceMatch : public UTagPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDistanceMatchType DistanceMatchType;
    
    UPROPERTY(EditAnywhere)
    EDistanceMatchBasis DistancematchBasis;
    
    UPROPERTY(EditAnywhere)
    float Lead;
    
    UPROPERTY(EditAnywhere)
    float Tail;
    
    UTag_DistanceMatch();

};

