#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBaseHit.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityLightHit.generated.h"

class UAnimMontage;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityLightHit : public UGameplayAbilityBaseHit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAnimMontage* m_Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OnHitEffect;
    
public:
    UGameplayAbilityLightHit();

};

