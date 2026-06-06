#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "TerritorySubsystemWorldConfig.generated.h"

UCLASS(EditInlineNew)
class G1R_API UTerritorySubsystemWorldConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDebugAlwaysReturnBeingInTerritory;
    
    UPROPERTY(EditAnywhere)
    bool bDebugNeverHaveCharacterInCombatRadius;
    
    UPROPERTY(EditAnywhere)
    bool bDebugAlwaysHaveCharacterInCombatRadius;
    
    UTerritorySubsystemWorldConfig();

};

