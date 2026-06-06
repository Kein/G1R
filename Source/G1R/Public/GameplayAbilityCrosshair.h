#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAbilityCrosshair.generated.h"

class UHUDCrosshairController;
class UReachableTargetIndicatorForProjectilesComponent;

UCLASS()
class G1R_API UGameplayAbilityCrosshair : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ReachabilityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ReachabilityRange;
    
private:
    UPROPERTY()
    UHUDCrosshairController* m_HUDCrosshairController;
    
    UPROPERTY(Instanced)
    UReachableTargetIndicatorForProjectilesComponent* m_ReachableTargetIndicatorComponent;
    
public:
    UGameplayAbilityCrosshair();

};

