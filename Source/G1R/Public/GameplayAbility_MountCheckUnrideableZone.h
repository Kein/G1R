#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbility_MountCheckUnrideableZone.generated.h"

class UAIState_DailyRoutine;

UCLASS()
class G1R_API UGameplayAbility_MountCheckUnrideableZone : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIState_DailyRoutine> m_ExitZoneRoutine;
    
public:
    UGameplayAbility_MountCheckUnrideableZone();

private:
    UFUNCTION()
    void OnTagAdded(const FGameplayTag InTag, int32 NewCount);
    
};

