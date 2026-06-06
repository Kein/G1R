#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpellTargetable.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpellTargetableWithDebuff.generated.h"

class UGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilitySpellTargetableWithDebuff : public UGameplayAbilitySpellTargetable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FActiveGameplayEffectHandle m_EffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_DebuffEffect;
    
public:
    UGameplayAbilitySpellTargetableWithDebuff();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectRemoved_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEffectApplied_Scriptable();
    
};

