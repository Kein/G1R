#pragma once
#include "CoreMinimal.h"
#include "AngelscriptAbilitySystemComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EAbilityInputID.h"
#include "OnGameplayEffectAppliedDymamicMulticastDelegateDelegate.h"
#include "GothicAbilitySystemComponent.generated.h"

class UPlayerPreset;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicAbilitySystemComponent : public UAngelscriptAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnGameplayEffectAppliedDymamicMulticastDelegate OnGameplayEffectAppliedToSelfDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameplayEffectAppliedDymamicMulticastDelegate OnGameplayEffectAppliedToTargetDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameplayEffectAppliedDymamicMulticastDelegate OnActiveGameplayEffectAddedToSelfDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameplayEffectAppliedDymamicMulticastDelegate OnPeriodicGameplayEffectExecuteOnSelfDynamicDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnGameplayEffectAppliedDymamicMulticastDelegate OnPeriodicGameplayEffectExecuteOnTargetDynamicDelegate;
    
    //FIXME
    ///UGothicAbilitySystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerPreset(UPlayerPreset* Preset);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetInputDoubleTap(FGameplayAbilitySpecHandle AbilityHandle);
    
    UFUNCTION(Reliable, Server)
    void Server_RemoveTag(const FGameplayTag& TagToRemove, bool Predicted);
    
    UFUNCTION(Reliable, Server)
    void Server_RemoveLooseTags(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count);
    
    UFUNCTION(Reliable, Server)
    void Server_AddTag(const FGameplayTag& NewTag, bool Predicted);
    
    UFUNCTION(Reliable, Server)
    void Server_AddLooseTags(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count);
    
public:
    UFUNCTION(Reliable, Server)
    void SendScalarGameplayEffectServer(const FGameplayAttribute& Attribute, const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FGameplayTag& TagToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLooseTags(const FGameplayTagContainer& GameplayTags, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void RemoveLooseTag(const FGameplayTag& TagToRemove, int32 Count);
    
protected:
    UFUNCTION()
    void OnOwnerTagChange(FGameplayTag TagChange, int32 NewCount);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveTag(const FGameplayTag& TagToRemove, bool Predicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_RemoveLooseTags(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddTag(const FGameplayTag& NewTag, bool Predicted);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_AddLooseTags(const FGameplayTagContainer& GameplayTags, bool Predicted, int32 Count);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTagExact(const FGameplayTag& GameplayTag) const;
    
    UFUNCTION()
    FGameplayAbilityLocalAnimMontage GetLocalAnimMontageInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_SendGameplayEvent(FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable)
    void BP_AbilityLocalInputRelease(EAbilityInputID InputID);
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& NewTag);
    
    UFUNCTION(BlueprintCallable)
    void AddLooseTags(const FGameplayTagContainer& GameplayTags, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AddLooseTag(const FGameplayTag& NewTag, int32 Count);
    
};

