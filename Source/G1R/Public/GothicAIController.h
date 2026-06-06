#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "UObject/NoExportTypes.h"
#include "AIAgentController.h"
#include "CharacterStateProvider.h"
#include "EAdaptZDivergeMode.h"
#include "GothicPathfollowSettings.h"
#include "GothicAIController.generated.h"

class AGothicCharacterState;
class UGameplayAbility_CharacterAI;

UCLASS()
class G1R_API AGothicAIController : public AAIAgentController, public ICharacterStateProvider {
    GENERATED_BODY()
public:
    AGothicAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector TryGetValidNavLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPathfollowingPaused() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPathfollowingComponentInitialized();
    
    UFUNCTION(BlueprintPure)
    bool IsFullyOutSideNavMesh() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingStatus::Type> GetPathfollowingStatus() const;
    
    UFUNCTION(BlueprintCallable)
    FGothicPathfollowSettings GetMutableCurrentPathfollowSetting();
    
    UFUNCTION(BlueprintPure)
    FGothicPathfollowSettings GetCurrentPathfollowSetting() const;
    
    UFUNCTION(BlueprintPure)
    UGameplayAbility_CharacterAI* GetAIAbility() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ResumeMove();
    
    UFUNCTION(BlueprintCallable)
    void BP_PauseMove();
    
    UFUNCTION(BlueprintCallable)
    float BP_GetRequestedWorldSpaceZDivergeHeightTheoretically(EAdaptZDivergeMode ZDivergeMode, const FVector& AtLocation, float ZOffset);
    
    UFUNCTION(BlueprintCallable)
    float BP_GetRequestedWorldSpaceZDivergeHeight();
    
    UFUNCTION(BlueprintPure)
    AGothicCharacterState* BP_GetCharacterState() const;
    
    UFUNCTION(BlueprintPure)
    float BP_GetActualPossibleWorldZDivergeHeight() const;
    

    // Fix for true pure virtual functions not being implemented
};

