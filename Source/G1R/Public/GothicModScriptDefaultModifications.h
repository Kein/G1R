#pragma once
#include "CoreMinimal.h"
#include "GothicModClassModifications.h"
#include "GothicModScriptDefaultModifications.generated.h"

class UClass;

USTRUCT(BlueprintType)
struct FGothicModScriptDefaultModifications {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<UClass>, FGothicModClassModifications> ModifiedClasses;
    
    G1R_API FGothicModScriptDefaultModifications();
};

