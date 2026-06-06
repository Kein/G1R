#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CreditsRowContent.h"
#include "CreditsSectionData.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UCreditsSectionData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_DepartmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* m_LogoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCreditsRowContent> m_DepartmentContent;
    
    UCreditsSectionData();

};

