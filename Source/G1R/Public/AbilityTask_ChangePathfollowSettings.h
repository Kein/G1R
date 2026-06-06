#pragma once
#include "CoreMinimal.h"
#include "AbilityTaskGeneric.h"
#include "GothicPathfollowSettings.h"
#include "AbilityTask_ChangePathfollowSettings.generated.h"

class UAbilityTask_ChangePathfollowSettings;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_ChangePathfollowSettings : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UAbilityTask_ChangePathfollowSettings();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ChangePathfollowSettings* ChangeSettingForDuration(UGameplayAbility* OwningAbility, const FGothicPathfollowSettings& NewSettings, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_ChangePathfollowSettings* ChangeSetting(UGameplayAbility* OwningAbility, const FGothicPathfollowSettings& NewSettings);
    
};

