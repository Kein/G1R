#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicNPCStateMixins.generated.h"

class AGothicCharacterState;
class AGothicNPCState;

UCLASS(BlueprintType)
class G1R_API UGothicNPCStateMixins : public UObject {
    GENERATED_BODY()
public:
    UGothicNPCStateMixins();

    UFUNCTION(BlueprintCallable)
    static AGothicNPCState* GetNPCState(AGothicCharacterState* This);
    
};

