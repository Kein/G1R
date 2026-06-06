#pragma once
#include "CoreMinimal.h"
#include "GameStateSubsystem.h"
#include "GothicFluxSubsystem.generated.h"

class AActor;
class IGothicFluxActivable;
class UGothicFluxActivable;
class UGothicFluxSubsystem;
class UObject;

UCLASS(BlueprintType)
class G1R_API UGothicFluxSubsystem : public UGameStateSubsystem {
    GENERATED_BODY()
public:
    UGothicFluxSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateActiveActor(const TScriptInterface<IGothicFluxActivable>& FluxActivable);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterSurface(const TScriptInterface<IGothicFluxActivable>& FluxActivable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSurface(const TScriptInterface<IGothicFluxActivable>& FluxActivable);
    
    UFUNCTION(BlueprintPure)
    bool IsAnySurfaceActive() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSurfaceActiveActor();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UGothicFluxSubsystem* GetGameFlux(UObject* WorldContextObject);
    
};

