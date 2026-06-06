#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GameplayEffectContext_HitResponse.generated.h"

class UAttackMeleeConfig;
class UKnockbackData;
class UWeaponDefinition;

USTRUCT(BlueprintType)
struct G1R_API FGameplayEffectContext_HitResponse : public FGameplayEffectContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag Impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeParried;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanBeDeflected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector AttackLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SourceDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag SourceAttackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponDefinition> WeaponUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, float> MultiplierDamages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MultiplierSuperArmor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BowStretch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UKnockbackData> CustomKnockbackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UAttackMeleeConfig> AttackConfig;
    
    FGameplayEffectContext_HitResponse();
};

