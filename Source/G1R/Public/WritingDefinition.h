#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "WritingDefinition.generated.h"

class UBookCoverConfiguration;
class UDocument;

UCLASS(EditInlineNew)
class G1R_API UWritingDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDocument> m_WritingDocument;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UBookCoverConfiguration> m_BookCoverConfiguration;
    
    UWritingDefinition();

};

