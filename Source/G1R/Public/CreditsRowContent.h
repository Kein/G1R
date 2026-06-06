#pragma once
#include "CoreMinimal.h"
#include "CreditsRowContent.generated.h"

USTRUCT(BlueprintType)
struct FCreditsRowContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_PersonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_PersonPosition;
    
    G1R_API FCreditsRowContent();
};

