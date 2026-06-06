#pragma once
#include "CoreMinimal.h"
#include "TagPoint.h"
#include "Tag_ActionMarker.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MOTIONSYMPHONY_API UTag_ActionMarker : public UTagPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString ActionName;
    
    UTag_ActionMarker();

};

