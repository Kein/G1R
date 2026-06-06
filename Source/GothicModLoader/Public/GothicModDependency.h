#pragma once
#include "CoreMinimal.h"
#include "EGothicModVersionComparison.h"
#include "GothicModDependency.generated.h"

USTRUCT()
struct GOTHICMODLOADER_API FGothicModDependency {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Name;
    
    UPROPERTY(EditAnywhere)
    FString RequiredVersion;
    
    UPROPERTY(EditAnywhere)
    EGothicModVersionComparison VersionComparison;
    
    FGothicModDependency();
};

