#pragma once
#include "CoreMinimal.h"
#include "AIWorldEvent.h"
#include "AIWorldEventExplicit.generated.h"

UCLASS(Abstract)
class UAIWorldEventExplicit : public UAIWorldEvent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 KeepActiveCount;
    
    UAIWorldEventExplicit();

};

