#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityRegenerateSuperArmor.generated.h"

class UAbilitySystemComponent;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityRegenerateSuperArmor : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_RegenerateArmorEffect;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbComp;
    
public:
    UGameplayAbilityRegenerateSuperArmor();

};

