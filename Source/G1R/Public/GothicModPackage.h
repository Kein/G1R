#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicModDesc.h"
#include "GothicMod.h"
#include "GothicModPackage.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicModPackage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FGothicModDesc Desc;
    
    UPROPERTY(BlueprintReadOnly)
    FGothicMod Modifications;
    
    UGothicModPackage();

};

