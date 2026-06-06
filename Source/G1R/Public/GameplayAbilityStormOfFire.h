#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpellBasic.h"
#include "GameplayAbilityStormOfFire.generated.h"

class AStormOfFireVisual;

UCLASS()
class G1R_API UGameplayAbilityStormOfFire : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AStormOfFireVisual* m_SpellProjectile;
    
public:
    UGameplayAbilityStormOfFire();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFireProjectile_Scriptable();
    
    UFUNCTION()
    void OnFireProjectile();
    
};

