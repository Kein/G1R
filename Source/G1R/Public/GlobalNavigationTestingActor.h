#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NavigationTestingActor.h"
#include "EFindPathType.h"
#include "Templates/SubclassOf.h"
#include "GlobalNavigationTestingActor.generated.h"

class UAIAgentConfig_Navigation;

UCLASS()
class G1R_API AGlobalNavigationTestingActor : public ANavigationTestingActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EFindPathType PathfindingType;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIAgentConfig_Navigation> NavigationConfig;
    
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag QuerierSpeciesTag;
    
    AGlobalNavigationTestingActor(const FObjectInitializer& ObjectInitializer);

};

