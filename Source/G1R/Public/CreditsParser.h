#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreditsSectionContent.h"
#include "CreditsParser.generated.h"

UCLASS(BlueprintType)
class G1R_API UCreditsParser : public UObject {
    GENERATED_BODY()
public:
    UCreditsParser();

    UFUNCTION(BlueprintCallable)
    static TArray<FCreditsSectionContent> GetCreditsContent(const FString& _FilePath);
    
};

