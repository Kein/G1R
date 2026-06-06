#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "ScriptGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityTraceTarget.generated.h"

class AActor;
class UGothicAbilitySystemComponent;
class USpellConfig;
class USpellExecutionValidator;

UCLASS()
class G1R_API UGameplayAbilityTraceTarget : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<AActor> m_TargetedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TraceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_TraceRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellConfig> m_SpellConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> m_CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> m_DrawDebugType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicAbilitySystemComponent* m_AbComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellExecutionValidator> m_ExecutionValidator;
    
public:
    UGameplayAbilityTraceTarget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FGameplayTag& NewTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNotHitServer_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitServer_Scriptable(const FHitResult& OutHit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndSpellServer_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivateHighlightServer_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateSpellServer_Scriptable();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateHighlightServer_Scriptable();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTarget();
    
public:
    UFUNCTION(BlueprintCallable)
    bool DoTraceToTarget(FHitResult& OutHit, AActor* TracedActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& NewTag);
    
};

