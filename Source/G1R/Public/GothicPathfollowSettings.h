#pragma once
#include "CoreMinimal.h"
#include "ECrowdGroupsBehaviour.h"
#include "ECrowdIdleBehaviour.h"
#include "EScriptableCrowdAvoidanceQuality.h"
#include "GothicFlyDiveSettings.h"
#include "PathfollowModifyAvoidVelocitySettings.h"
#include "PathfollowMoveFocusSettings.h"
#include "GothicPathfollowSettings.generated.h"

class UAbilityTaskGeneric;

USTRUCT(BlueprintType)
struct FGothicPathfollowSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UAbilityTaskGeneric> OwningTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString DebugOwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrowdAgentSeparationWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrowdAgentRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CrowdAgentHalfHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AgentHalfHeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSlowDownAtGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableAnticipateTurns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStrafeTurnToPotentialBlockingAgent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECrowdGroupsBehaviour CrowdGroupsBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECrowdIdleBehaviour CrowdIdleBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EScriptableCrowdAvoidanceQuality CrowdAvoidanceQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnablePathPolyOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPathfollowModifyAvoidVelocitySettings ModifyAvoidVelocitySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPathfollowMoveFocusSettings MoveFocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGothicFlyDiveSettings FlyDiveSettings;
    
    G1R_API FGothicPathfollowSettings();
};

