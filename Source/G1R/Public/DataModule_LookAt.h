#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DataModule.h"
#include "DataModule_LookAt.generated.h"

UCLASS(BlueprintType)
class UDataModule_LookAt : public UDataModule {
    GENERATED_BODY()
public:
    UDataModule_LookAt();

    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtPosition() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtPoint() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnableLookAt() const;
    
};

