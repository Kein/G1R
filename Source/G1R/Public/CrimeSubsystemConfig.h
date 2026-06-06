#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrimeSubsystemConfig.generated.h"

class UCrimeMemorySubsystem;

UCLASS(Abstract, Blueprintable)
class G1R_API UCrimeSubsystemConfig : public UObject {
    GENERATED_BODY()
public:
    UCrimeSubsystemConfig();

    UFUNCTION(BlueprintImplementableEvent)
    void SetupGeneralConfig(UCrimeMemorySubsystem* CrimeMemorySubsystem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupCrimeMemoryPathways(UCrimeMemorySubsystem* CrimeMemorySubsystem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupCrimeMemoryLocations(UCrimeMemorySubsystem* CrimeMemorySubsystem);
    
};

