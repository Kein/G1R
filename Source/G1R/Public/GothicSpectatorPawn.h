#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "AbilitySystemInterface.h"
#include "GothicSpectatorPawn.generated.h"

class UGothicAbilitySystemComponent;

UCLASS()
class G1R_API AGothicSpectatorPawn : public ASpectatorPawn, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
public:
    AGothicSpectatorPawn(const FObjectInitializer& ObjectInitializer);


    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; };
};

