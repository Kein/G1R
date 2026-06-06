#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GothicActorComponentInterface.h"
#include "Templates/SubclassOf.h"
#include "GothicWaterVolumeSensor.generated.h"

class AGothicCharacter;
class UGothicAbilitySystemComponent;
class UScriptGameplayEffect;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicWaterVolumeSensor : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_GothicCharacter;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_GothicAbilitySystemComponent;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_ActiveEffectHandle;
    
    UPROPERTY()
    TSubclassOf<UScriptGameplayEffect> m_PreviousWaterEffect;
    
public:
    UGothicWaterVolumeSensor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnHasWaterChanged(bool hasWater);
    

    // Fix for true pure virtual functions not being implemented
};

