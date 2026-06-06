#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityCastSpell.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityCastRechargeableSpell.generated.h"

class UGameplayAbilityBase;

UCLASS()
class G1R_API UGameplayAbilityCastRechargeableSpell : public UGameplayAbilityCastSpell {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayAbilityBase> m_GA_Attack;
    
public:
    UGameplayAbilityCastRechargeableSpell();

protected:
    UFUNCTION(Client, Reliable)
    void ClientPlayNextCastLevel();
    
};

