#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "ActiveGameplayEffectHandle.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "EGothicLogCategory.h"
#include "GameplayEffectContext_HitResponse.h"
#include "Templates/SubclassOf.h"
#include "GothicGASLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAttributeSet;
class UGameplayAbility;
class UGameplayEffect;
class UGothicAbilitySystemComponent;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class G1R_API UGothicGASLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicGASLibrary();

    UFUNCTION(BlueprintCallable)
    static void SendGameplayEvent(AActor* Target, FGameplayTag Tag, FGameplayEventData& Payload);
    
    UFUNCTION(BlueprintCallable)
    static bool SameGuildOrGroup(AActor* checkA, AActor* checkB);
    
    UFUNCTION(BlueprintCallable)
    static void Log_Info(EGothicLogCategory Category, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveGameplayEffectHandleValid(FActiveGameplayEffectHandle& Handle);
    
    UFUNCTION()
    static void InitializeHitData(FGameplayEventData& Payload, FGameplayEffectContext_HitResponse& HitContext);
    
    UFUNCTION(BlueprintPure)
    static bool HasTag(const UAbilitySystemComponent* AbilitySystemComponent, FGameplayTag Tag, bool bExactMatch);
    
    UFUNCTION(BlueprintPure)
    static UGothicAbilitySystemComponent* GetAbilitySystemComponentThreadSafe(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UGothicAbilitySystemComponent* GetAbilitySystemComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static UGameplayAbility* GetAbilityInstanceByClass(AActor* Actor, TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<TSubclassOf<UAttributeSet>> FindAttributeSetsFromAttributeName(const FString& AttributeName);
    
    UFUNCTION()
    static void ApplyDebuffGameplayEffects(UAbilitySystemComponent* AbilitySystemComponent, const TArray<TSubclassOf<UGameplayEffect>>& effectsToApply);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyDamageTo(UGothicAbilitySystemComponent* Source, AActor* Instigator, AActor* DamageCauser, UGothicAbilitySystemComponent* Target, FGameplayEffectContext_HitResponse HitData, const FHitResult& SweepResult, const UPrimitiveComponent* SourceObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddTargetRagdollData(FGameplayEventData& Payload, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void AddTargetInputData(FGameplayEventData& Payload, FGameplayTag SourceDir);
    
    UFUNCTION(BlueprintCallable)
    static void AddRainCoverHeadData(FGameplayEventData& Payload, int32 RainLevel);
    
};

