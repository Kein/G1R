#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "UDeflectedFX.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FUDeflectedFX : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EffectTag;
    
    G1R_API FUDeflectedFX();
};

