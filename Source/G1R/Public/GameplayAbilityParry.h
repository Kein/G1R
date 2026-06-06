#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase_Combat.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityParry.generated.h"

class UParriesData;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityParry : public UGameplayAbilityBase_Combat {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UParriesData* m_ParryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SuperArmorEffect;
    
public:
    UGameplayAbilityParry();

protected:
    UFUNCTION()
    void OnWaitDoRiposte();
    
    UFUNCTION()
    void OnValidData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION()
    void OnResetStates();
    
    UFUNCTION()
    void OnPressDodge();
    
    UFUNCTION()
    void OnAttackInput(FGameplayTag Direction);
    
};

