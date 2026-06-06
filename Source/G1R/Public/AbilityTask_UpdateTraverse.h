#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "TraversalInfo.h"
#include "AbilityTask_UpdateTraverse.generated.h"

class ACharacter;
class UAbilityTask_UpdateTraverse;
class UAnimMontage;
class UCharacterMovementComponent;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_UpdateTraverse : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ACharacter* m_Character;
    
    UPROPERTY(Instanced)
    UCharacterMovementComponent* m_CharacterMovementComponent;
    
    UPROPERTY()
    UAnimMontage* m_Montage;
    
public:
    UAbilityTask_UpdateTraverse();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateTraverse* CreateUpdateTraverse(UGameplayAbility* OwningAbility, FName TaskInstanceName, bool UsingCustomTraversalInfo, FTraversalInfo& TraversalInfo, UAnimMontage* Montage, float PlayRate, FVector StartOffset, bool CalculateEdgeHeightFromFeetLocation);
    
};

