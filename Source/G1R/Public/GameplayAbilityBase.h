#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.generated.h"

UCLASS(Abstract)
class G1R_API UGameplayAbilityBase : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_ActivateAbilityOnGranted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_TickEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_bCanEverTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_FinishOnInputReleased: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 m_OnlyPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_LoadAssetsPriority;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FGameplayTagContainer m_AssetPreloadContext;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 m_MaxActiveCount;
    
public:
    UGameplayAbilityBase();

protected:
    UFUNCTION(BlueprintCallable)
    void TriggerEndOn(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBeginOn(const FGameplayTag Tag, TEnumAsByte<EGameplayAbilityTriggerSource::Type> TriggerSource);
    
};

