#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityTargetBase.generated.h"

class UGothicGameUserSettings;
class USceneComponent;

UCLASS()
class G1R_API UGameplayAbilityTargetBase : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    USceneComponent* m_Target;
    
    UPROPERTY(Instanced)
    TArray<USceneComponent*> m_PotentialTargetsAround;
    
    UPROPERTY()
    TWeakObjectPtr<UGothicGameUserSettings> m_GameUserSettings;
    
public:
    UGameplayAbilityTargetBase();

protected:
    UFUNCTION(BlueprintPure)
    void QueryPotentialTargetsAround(TArray<USceneComponent*>& Targets, float Radius) const;
    
    UFUNCTION()
    void OnTargetVisualLost();
    
    UFUNCTION()
    void OnTargetFound(USceneComponent* Target);
    
    UFUNCTION()
    void OnTargetData(const FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION()
    void OnSelectTargetMouseDirectionClient(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void OnSelectNextTargetClient(const FInputActionInstance& Instance);
    
    UFUNCTION()
    void FindTarget();
    
};

