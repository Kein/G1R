#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlkInputAction.generated.h"

USTRUCT(BlueprintType)
struct FAlkInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_DataTableRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsPersistent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ConsumeInput;
    
    G1R_API FAlkInputAction();
};

