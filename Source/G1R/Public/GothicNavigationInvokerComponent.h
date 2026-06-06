#pragma once
#include "CoreMinimal.h"
#include "NavigationInvokerComponent.h"
#include "GothicNavigationInvokerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicNavigationInvokerComponent : public UNavigationInvokerComponent {
    GENERATED_BODY()
public:
    UGothicNavigationInvokerComponent(const FObjectInitializer& ObjectInitializer);

};

