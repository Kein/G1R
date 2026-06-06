#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AI/Navigation/NavigationTypes.h"
#include "ClientAuthoritativeCharacterMovementComponent.h"
#include "GroundMovementModeRequest.h"
#include "GothicBaseMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicBaseMovementComponent : public UClientAuthoritativeCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    bool bHadRootMotion;
    
    UPROPERTY(Replicated)
    bool bWantsSweepWhileNavWalking;
    
    UPROPERTY()
    TMap<TEnumAsByte<EMovementMode>, FNavAgentProperties> NavAgentPropsByMovementMode;
    
private:
    UPROPERTY()
    TArray<FGroundMovementModeRequest> IntendedLandMovementModeRequesterStack;
    
    UPROPERTY()
    TArray<TEnumAsByte<EMovementMode>> PotentialLandMovementModes;
    
    UPROPERTY()
    FVector RequestedPathMoves[3];
    
public:
    UGothicBaseMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Client, Reliable)
    void Client_NavAgentPropsUpdated(const FNavAgentProperties& NewNavAgentProps);
    
};

