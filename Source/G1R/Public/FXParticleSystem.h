#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FXParticleSystem.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFXParticleSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UNiagaraSystem>> NiagaraSystemPathBySurfaceType;
    
    UPROPERTY(EditAnywhere)
    bool bUnderWaterEffect;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, bool> BoolParameters;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, float> FloatParameters;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, FVector> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite)
    TMap<FName, int32> IntParameters;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsLooping;
    
    G1R_API FFXParticleSystem();
};

