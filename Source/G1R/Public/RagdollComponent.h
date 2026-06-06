#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "RagdollComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API URagdollComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName HairPhysBone;
    
private:
    UPROPERTY(Replicated)
    FVector m_TargetRagdollLocation;
    
    UPROPERTY(ReplicatedUsing=OnRep_IsRagdollActive)
    bool m_IsRagdollActive;
    
protected:
    UPROPERTY()
    FTransform m_PreRagdollCameraBoomRelativeTransform;
    
public:
    URagdollComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(Reliable, Server)
    void Server_SetMeshLocation(FVector TargetRagdollLocation);
    
private:
    UFUNCTION()
    void OnRep_IsRagdollActive();
    

    // Fix for true pure virtual functions not being implemented
};

