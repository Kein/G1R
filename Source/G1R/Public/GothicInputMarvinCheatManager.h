#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicInputMarvinCheatManager.generated.h"

class AGothicCharacter;

UCLASS()
class G1R_API UGothicInputMarvinCheatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    AGothicCharacter* GothicCharacter;
    
public:
    UGothicInputMarvinCheatManager();

};

