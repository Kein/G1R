#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MPSyncCommonInfo.generated.h"

UINTERFACE()
class G1R_API UMPSyncCommonInfo : public UInterface {
    GENERATED_BODY()
};

class G1R_API IMPSyncCommonInfo : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool IsDataReady() const PURE_VIRTUAL(IsDataReady, return false;);
    
};

