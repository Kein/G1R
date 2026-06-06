#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GothicDataValidationInterface.h"
#include "GothicBaseConfig.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class G1R_API UGothicBaseConfig : public UObject, public IGothicDataValidationInterface {
    GENERATED_BODY()
public:
    UGothicBaseConfig();


    // Fix for true pure virtual functions not being implemented
};

