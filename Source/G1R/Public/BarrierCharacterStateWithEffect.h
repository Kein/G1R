#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BarrierCharacterState.h"
#include "LightConfig.h"
#include "BarrierCharacterStateWithEffect.generated.h"

class UBarrierEffectHandler;
class UPointLightComponent;

UCLASS()
class UBarrierCharacterStateWithEffect : public UBarrierCharacterState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FLightConfig LightConfig;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPointLightComponent* Light;
    
    UPROPERTY(EditAnywhere)
    TArray<UBarrierEffectHandler*> Handlers;
    
    UPROPERTY()
    FGameplayTag m_FX_Tag_NPC;
    
public:
    UBarrierCharacterStateWithEffect();

};

