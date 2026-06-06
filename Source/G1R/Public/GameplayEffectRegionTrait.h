#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "RegionTrait.h"
#include "GameplayEffectRegionTrait.generated.h"

class UGothicAbilitySystemComponent;

UCLASS(EditInlineNew)
class G1R_API UGameplayEffectRegionTrait : public URegionTrait, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UGothicAbilitySystemComponent* AbilitySystem;
    
public:
    UGameplayEffectRegionTrait();


    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return NULL; };
};

