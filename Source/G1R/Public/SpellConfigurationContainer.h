#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "SpellConfigurationContainer.generated.h"

class UGameplayEffect;
class UScriptGameplayEffect;
class USpellAnimationBaseDirector;
class USpellConfig;

UCLASS(BlueprintType)
class G1R_API USpellConfigurationContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SetStateLockMovementOnCast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SetStateLockMovementOnSpell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_OnLaunchSpellCastFinishByAnimNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_SuperArmorEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SuperArmorResistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_ShouldRestoreCameraBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_CastStateLockMovementGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> m_SpellStateLockMovementGameplayEffectClass;
    
private:
    UPROPERTY()
    TSubclassOf<USpellConfig> m_SpellConfigClass;
    
    UPROPERTY()
    FGameplayTag m_SpellTag;
    
    UPROPERTY()
    FGameplayTag m_SpellCancelTag;
    
    UPROPERTY()
    TSubclassOf<USpellAnimationBaseDirector> m_AnimatorDirectorClass;
    
public:
    USpellConfigurationContainer();

    UFUNCTION(BlueprintPure)
    USpellConfig* GetSpellConfig() const;
    
};

