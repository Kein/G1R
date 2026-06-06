#pragma once
#include "CoreMinimal.h"
#include "PageContent.generated.h"

class UDocumentElement;

USTRUCT(BlueprintType)
struct FPageContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDocumentElement*> m_OrderedElements;
    
    G1R_API FPageContent();
};

