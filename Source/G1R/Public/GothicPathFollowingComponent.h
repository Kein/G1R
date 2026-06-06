#pragma once
#include "CoreMinimal.h"
#include "AITypes.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "ENavigationType.h"
#include "Templates/SubclassOf.h"
#include "GothicPathFollowingComponent.generated.h"

class ADynamicNavObstacle;
class AGothicCharacter;
class UGothicPathFollowingComponent;
class UNavArea;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ADynamicNavObstacle* IdleNavObstacle;
    
    UPROPERTY()
    TSubclassOf<UNavArea> CurrentWalkedNavArea;
    
    UPROPERTY()
    TOptional<FVector> LastValidNavLocation;
    
    UPROPERTY()
    ENavigationType DefaultNavigationType;
    
    UPROPERTY()
    ENavigationType CurrentNavigationType;
    
    UPROPERTY()
    FAIMoveRequest CurrentMoveRequest;
    
    UPROPERTY()
    AGothicCharacter* BumpedIntoCharacter;
    
    UPROPERTY(Instanced)
    UGothicPathFollowingComponent* JostlingAgent;
    
public:
    UGothicPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

