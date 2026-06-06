#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreditsRowContent.h"
#include "CreditsRowData.generated.h"

UCLASS(BlueprintType)
class G1R_API UCreditsRowData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCreditsRowContent m_PersonData;
    
    UCreditsRowData();

};

