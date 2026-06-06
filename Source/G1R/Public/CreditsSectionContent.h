#pragma once
#include "CoreMinimal.h"
#include "CreditsRowContent.h"
#include "CreditsSectionContent.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCreditsSectionContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_SectionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture2D* m_LogoTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCreditsRowContent> m_SectionContent;
    
    G1R_API FCreditsSectionContent();
};

