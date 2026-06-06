#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBaseHit.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityDeflectedHit.generated.h"

class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityDeflectedHit : public UGameplayAbilityBaseHit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ResetEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ImmunityEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_ParriedEffect;
    
public:
    UGameplayAbilityDeflectedHit();

};

