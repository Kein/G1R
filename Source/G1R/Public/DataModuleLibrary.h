#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataModuleLibrary.generated.h"

class AActor;
class UDataModule_Animation;
class UDataModule_BaseStats;
class UDataModule_Combat;
class UDataModule_Container;
class UDataModule_Locomotion;
class UDataModule_LookAt;
class UDataModule_Targeting;

UCLASS(BlueprintType)
class UDataModuleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataModuleLibrary();

    UFUNCTION(BlueprintPure)
    static UDataModule_Targeting* GetTargetingDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_LookAt* GetLookAtDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_Locomotion* GetLocomotionDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_Container* GetContainerDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_Combat* GetCombatDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_BaseStats* GetBaseStatsDataModule(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UDataModule_Animation* GetAnimationDataModule(const AActor* Actor);
    
};

