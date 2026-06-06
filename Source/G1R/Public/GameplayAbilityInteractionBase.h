#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EStance.h"
#include "InteractionSpotHandle.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbilityInteractionBase.generated.h"

class AActor;

UCLASS()
class G1R_API UGameplayAbilityInteractionBase : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool m_AbilityEnded;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* m_InteractiveActor;
    
    UPROPERTY(BlueprintReadOnly)
    FInteractionSpotHandle m_InteractionSpot;
    
    UPROPERTY()
    TOptional<TEnumAsByte<EMovementMode>> m_PrevMovementMode;
    
    UPROPERTY()
    TOptional<EStance> m_PrevStance;
    
    UPROPERTY()
    bool m_ShouldResetInteractiveLogic;
    
public:
    UGameplayAbilityInteractionBase();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetLocationReached();
    
    UFUNCTION(BlueprintCallable)
    void OnPreTargetLocationReached();
    
};

