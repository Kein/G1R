#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreditsParser.generated.h"

class UCreditsSection;
UCLASS(BlueprintType)
class G1R_API UCreditsParser : public UObject {
    GENERATED_BODY()
public:
    UCreditsParser();

    UFUNCTION(BlueprintCallable)
    static TArray<UCreditsSection*> GetCreditsContent(UObject* _Owner, const FString& _FilePath);
    
};

