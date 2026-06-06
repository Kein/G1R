#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CookExcludeRule.h"
#include "CookExcludeSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class G1R_API UCookExcludeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FCookExcludeRule> Rules;
    
    UCookExcludeSettings();

};

