#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffect.h"
#include "OnGameplayEffectAppliedDymamicMulticastDelegateDelegate.generated.h"

class UAbilitySystemComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnGameplayEffectAppliedDymamicMulticastDelegate, UAbilitySystemComponent*, TargetAbilitySystemComponent, const FGameplayEffectSpec&, GameplayEffectSpec, FActiveGameplayEffectHandle, ActiveGameplayEffectHandle);

