#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "SpellContext.generated.h"

class AActor;
class AGothicCharacter;
class ISpellAnimationDirector;
class USpellAnimationDirector;
class UGameplayAbility;
class USpellConfigurationContainer;

USTRUCT(BlueprintType)
struct G1R_API FSpellContext : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> Targets;
    
    UPROPERTY()
    bool m_TargetAdquiredByDatamodule;
    
private:
    UPROPERTY()
    USpellConfigurationContainer* m_SpellConfigurationContainer;
    
    UPROPERTY()
    TWeakObjectPtr<UGameplayAbility> m_OwningAbility;
    
    UPROPERTY()
    TScriptInterface<ISpellAnimationDirector> m_AnimationDirector;
    
    UPROPERTY()
    TWeakObjectPtr<AGothicCharacter> m_CurrentCharacter;
    
    UPROPERTY()
    float m_CastMontageTaskRemainingTime;
    
    UPROPERTY()
    int32 m_CurrentSpellLevel;
    
    UPROPERTY()
    bool m_IsRechargableSpellCancellableAfterFirstCharge;
    
public:
    FSpellContext();
};

