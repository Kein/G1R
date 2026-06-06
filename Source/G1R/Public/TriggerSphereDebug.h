#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerSphere.h"
#include "TriggerSphereDebug.generated.h"

UCLASS()
class ATriggerSphereDebug : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor m_DebugColor;
    
    ATriggerSphereDebug(const FObjectInitializer& ObjectInitializer);

};

