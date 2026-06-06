#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicActorComponentInterface.h"
#include "RotationModeComponent.generated.h"

class UCarryComponent;
class UGameplayAbility;
class UGothicAbilitySystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API URotationModeComponent : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
public:
    URotationModeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnAbilityActivated(UGameplayAbility* Ability);
    

    // Fix for true pure virtual functions not being implemented
};

