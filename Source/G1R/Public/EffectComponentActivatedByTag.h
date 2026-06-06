#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "EffectComponentBase.h"
#include "EffectComponentActivatedByTag.generated.h"

class UGothicAbilitySystemComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UEffectComponentActivatedByTag : public UEffectComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FActiveGameplayEffectHandle m_InstigatorEffectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_DebuffEffectTag;
    
    UPROPERTY()
    int32 m_PreviousTagCount;
    
public:
    UEffectComponentActivatedByTag(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestartEffect();
    
protected:
    UFUNCTION()
    void OnTagRemoved(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION()
    void OnTagAdded(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void OnNewOrRemovedTag(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION()
    void OnGameplayEffectRemovedExtended(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetGameplayTag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FActiveGameplayEffectHandle> GetActiveGameplayEffectsWithTag_Scriptable(UGothicAbilitySystemComponent* abComp);
    
};

