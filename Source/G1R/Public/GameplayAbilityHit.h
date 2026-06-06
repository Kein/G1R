#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBaseHit.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityHit.generated.h"

class UAnimMontage;
class UHitData;
class UScriptGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityHit : public UGameplayAbilityBaseHit {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_OnHitEffect;
    
public:
    UGameplayAbilityHit();

protected:
    UFUNCTION(BlueprintNativeEvent)
    UAnimMontage* GetHitMontage_Scriptable(const UHitData* HitData, const FGameplayTagContainer& MetaData);
    
};

