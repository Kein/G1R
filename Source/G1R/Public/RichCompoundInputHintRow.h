#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RichCompoundInputHintRow_Entry.h"
#include "RichCompoundInputHintRow.generated.h"

USTRUCT()
struct FRichCompoundInputHintRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FRichCompoundInputHintRow_Entry> m_MKBActions;
    
    UPROPERTY(EditAnywhere)
    TArray<FRichCompoundInputHintRow_Entry> m_ControllerActions;
    
    G1R_API FRichCompoundInputHintRow();
};

