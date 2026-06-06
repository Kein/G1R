#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageProgressionMagicCircle.h"
#include "ProjectileDefinition.h"
#include "SpellProjectileDefinition.generated.h"

class AActor;
class AGothicCharacter;

UCLASS(EditInlineNew)
class G1R_API USpellProjectileDefinition : public UProjectileDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DefaultTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Gravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SteeringFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_ExplosionPath;
    
    UPROPERTY()
    TMap<FGameplayTag, FDamageProgressionMagicCircle> m_DamageMagicCircleProgression;
    
    USpellProjectileDefinition();

    UFUNCTION(BlueprintCallable)
    float GetDamageByCharacterMagicCircle(AGothicCharacter* Character, FGameplayTag DamageTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddDamageForMagicCircle(FGameplayTag DamageTag, FGameplayTag MagicCircleTag, float DamageValue);
    
};

