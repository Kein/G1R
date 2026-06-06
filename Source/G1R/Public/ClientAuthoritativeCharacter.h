#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ClientAuthoritativeMoveData.h"
#include "ClientAuthoritativeCharacter.generated.h"

UCLASS()
class G1R_API AClientAuthoritativeCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(Replicated)
    bool bHasOverrideRootMotion;
    
    AClientAuthoritativeCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(Server, Unreliable)
    void ClientAuthoritativeMove(const FClientAuthoritativeMoveData& MoveData);
    
};

