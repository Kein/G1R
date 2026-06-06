#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BookVisualConfiguration.h"
#include "BookCoverConfiguration.generated.h"

UCLASS(BlueprintType)
class G1R_API UBookCoverConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBookVisualConfiguration m_BookVisualConfiguration;
    
    UBookCoverConfiguration();

};

