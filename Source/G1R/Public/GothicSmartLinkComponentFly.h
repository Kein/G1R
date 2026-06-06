#pragma once
#include "CoreMinimal.h"
#include "GothicSmartLinkComponentGeneric.h"
#include "GothicSmartLinkComponentFly.generated.h"

class UAbilityTask_ChangePathfollowSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicSmartLinkComponentFly : public UGothicSmartLinkComponentGeneric {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_ChangePathfollowSettings* ChangePathfollowSettingsTask;
    
public:
    UGothicSmartLinkComponentFly(const FObjectInitializer& ObjectInitializer);

};

