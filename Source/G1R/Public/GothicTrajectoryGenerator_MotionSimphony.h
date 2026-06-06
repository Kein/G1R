#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EHistoryTrajectoryMode.h"
#include "InputProfile.h"
#include "TrajectoryGenerator.h"
#include "GothicActorComponentInterface.h"
#include "GothicTrajectoryGenerator_MotionSimphony.generated.h"

class AGothicPlayerControllerBase;
class UCameraComponent;
class UDataModule_Locomotion;
class UGothicAnimationComponent;
class UGothicMovementComponent;
class UMMConfig;
class UPathFollowingComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicTrajectoryGenerator_MotionSimphony : public UTrajectoryGenerator, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    bool m_OriginalFlattenTrajectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_FlattenTrajectoryCrouched;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_MovementComponent;
    
    UPROPERTY(Instanced)
    UGothicAnimationComponent* m_AnimationComponent;
    
    UPROPERTY(Instanced)
    UCameraComponent* m_Camera;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Locomotion> m_DataModule_Locomotion;
    
    UPROPERTY(Instanced)
    UMMConfig* m_MMConfig;
    
    UPROPERTY(ReplicatedUsing=OnRepInputVector)
    FVector_NetQuantize10 m_RepInputVector;
    
    UPROPERTY(BlueprintReadWrite)
    FInputProfile m_CurrentInputProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHistoryTrajectoryMode m_HistoryTrajectoryMode;
    
    UPROPERTY()
    AGothicPlayerControllerBase* m_Controller;
    
    UPROPERTY(Instanced)
    UPathFollowingComponent* m_PathFollowing;
    
public:
    UGothicTrajectoryGenerator_MotionSimphony(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputReplicated(float XAxisValue, float YAxisValue, float ZAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTrajectoryInputInterp(FVector Input, float Speed, float DeltaTime);
    
    UFUNCTION(Reliable, Server)
    void Server_SetInputVector(const FVector& NewInputVector);
    
    UFUNCTION()
    void OnRepInputVector();
    

    // Fix for true pure virtual functions not being implemented
};

