#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "GameplayAbilitySpellBasic.h"
#include "GameplayAbilitySpellCommonProjectile.generated.h"

class AGothicCharacter;
class USpellProjectileDefinition;

UCLASS()
class G1R_API UGameplayAbilitySpellCommonProjectile : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinDistanceToAvoidShootingWhenTargetIsNotAccessible;
    
    UGameplayAbilitySpellCommonProjectile();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayLaunchSpellMontage_Scriptable(FName SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale);
    
    UFUNCTION(BlueprintCallable)
    void PlayEndAbilityMontages();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayLaunchSpellServer_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAccesible_Scriptable(AGothicCharacter* Character, const FVector& LocationToSpawn, USpellProjectileDefinition* ProjectileDefinition, FVector& TargetLocation, FHitResult& OutHitResult);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayLaunchSpell(FName SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayFailAbilityMontage();
    
    UFUNCTION(Client, Reliable)
    void ClientPlayEndSpellMontage();
    
};

