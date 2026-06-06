#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTaskBase.h"
#include "EClimbType.h"
#include "AbilityTask_UpdateClimb.generated.h"

class UAbilityTask_UpdateClimb;
class UClimbingAnimConfig;
class UClimbingConfig;
class UGameplayAbility;
class UPrimitiveComponent;

UCLASS()
class G1R_API UAbilityTask_UpdateClimb : public UAbilityTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UClimbingAnimConfig* m_ClimbingAnimConfig;
    
    UPROPERTY()
    FTransform m_EdgeTransform;
    
    UPROPERTY(Instanced)
    UPrimitiveComponent* m_ClimbingObject;
    
    UPROPERTY(Instanced)
    UClimbingConfig* m_ClimbingConfig;
    
public:
    UAbilityTask_UpdateClimb();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_UpdateClimb* CreateUpdateClimb(UGameplayAbility* OwningAbility, FName TaskInstanceName, FTransform EdgeTransform, UPrimitiveComponent* ClimbingObject, float ClimbAnimStartPos, EClimbType ClimbingType, FTransform ClimbingEdgeAnimStartOffset, FTransform ClimbingEdgeStartOffset, bool CalculateEdgeHeightFromFeetLocation);
    
};

