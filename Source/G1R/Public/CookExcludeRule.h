#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CookExcludeRule.generated.h"

USTRUCT(BlueprintType)
struct FCookExcludeRule {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Contains;
    
    UPROPERTY(EditAnywhere)
    bool CaseSensitive;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath SpecificAsset;
    
    UPROPERTY(EditAnywhere)
    TArray<FDirectoryPath> DoNotApplyToDirectories;
    
    G1R_API FCookExcludeRule();
};

