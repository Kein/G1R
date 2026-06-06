#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityHitRiposte.generated.h"

class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityHitRiposte : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OnHitEffect;
    
public:
    UGameplayAbilityHitRiposte();

};

