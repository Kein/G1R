#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GothicActorComponentInterface.h"
#include "OnRemoveItemCompletedDelegate.h"
#include "EffectComponentBase.generated.h"

class AActor;
class AEffectActorBase;
class UGameplayEffect;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UEffectComponentBase : public UActorComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleAnywhere)
    AEffectActorBase* m_EffectActor;
    
    UPROPERTY(Replicated)
    UClass* m_EffectActorClassPtr;
    
    UPROPERTY(Replicated)
    bool m_DoingRemoveEffect;
    
    UPROPERTY()
    TMap<FActiveGameplayEffectHandle, UGameplayEffect*> m_ActiveGameplayEffects;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsLoadedFromFile;
    
public:
    UPROPERTY(BlueprintCallable)
    FOnRemoveItemCompleted m_OnRemoveItemCompleted;
    
    UEffectComponentBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRemoveEffectCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameplayEffectRemoved_Scriptable(FActiveGameplayEffectHandle ActiveGameplayEffectHandle, const FGameplayEffectContextHandle& GameplayEffectContextHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameplayEffectApplied_Scriptable(FActiveGameplayEffectHandle ActiveGameplayEffectHandle, const FGameplayEffectContextHandle& GetContext);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(AActor* Target, UClass* EffectActorClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoRemoveEffect_Scriptable(const FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo);
    

    // Fix for true pure virtual functions not being implemented
};

