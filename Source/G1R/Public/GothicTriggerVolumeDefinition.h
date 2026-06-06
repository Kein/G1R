#pragma once
#include "CoreMinimal.h"
#include "GothicObjectDefinition.h"
#include "GothicTriggerVolumeDefinition.generated.h"

class AGothicCharacter;
class AGothicTriggerVolume;

UCLASS(Blueprintable, EditInlineNew)
class G1R_API UGothicTriggerVolumeDefinition : public UGothicObjectDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MustTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_OnlyPlayer;
    
    UGothicTriggerVolumeDefinition();

    UFUNCTION(BlueprintNativeEvent)
    void BP_Tick(AGothicCharacter* Character, AGothicTriggerVolume* Trigger, float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_MustDisableTrigger(AGothicTriggerVolume* Trigger);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_LeaveTrigger(AGothicCharacter* Character, AGothicTriggerVolume* Trigger);
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_ExecuteTrigger(AGothicCharacter* Character, AGothicTriggerVolume* Trigger);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanTrigger(AGothicCharacter* Character, AGothicTriggerVolume* Trigger);
    
};

