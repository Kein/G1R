#pragma once
#include "CoreMinimal.h"
#include "GothicCharacter.h"
#include "Templates/SubclassOf.h"
#include "AIAgentCharacter.generated.h"

class AActor;
class UAIAgentConfig;
class UNPCTalkBalloonComponent;
class USkeletalMesh;

UCLASS()
class G1R_API AAIAgentCharacter : public AGothicCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedMesh)
    USkeletalMesh* ReplicatedMesh;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UAIAgentConfig> DefaultAIAgentConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UNPCTalkBalloonComponent* m_TalkBalloonComponent;
    
    AAIAgentCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_ReplicatedMesh();
    
    UFUNCTION(NetMulticast, Reliable)
    void HandleDefeated(AActor* DefeatingCharacterActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDeathAS();
    
    UFUNCTION(NetMulticast, Reliable)
    void HandleDeath(AActor* DyingCharacterActor);
    
};

