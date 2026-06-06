#pragma once
#include "CoreMinimal.h"
#include "TickableGameStateSubsystem.h"
#include "EStencilsUsage.h"
#include "OutlineInteractor.h"
#include "OutlineSubsystem.generated.h"

class UInteractiveComponent;
class UOutlineSubsystemConfig;

UCLASS(BlueprintType)
class G1R_API UOutlineSubsystem : public UTickableGameStateSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UOutlineSubsystemConfig* Config;
    
private:
    UPROPERTY()
    TMap<UInteractiveComponent*, FOutlineInteractor> RegisteredOutlines;
    
    UPROPERTY(Instanced)
    TArray<UInteractiveComponent*> QueueToRemove;
    
public:
    UOutlineSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetIsSystemEnabled(bool State);
    
    UFUNCTION(BlueprintCallable)
    bool QueueRemoveOutline(UInteractiveComponent* Interactable);
    
private:
    UFUNCTION()
    void OnActorsInSensorUpdate(const TArray<UInteractiveComponent*>& SightOutlineArray, UInteractiveComponent* ActionOutline);
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetIsSystemEnabled();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutline();
    
    UFUNCTION(BlueprintCallable)
    bool AddOutline(UInteractiveComponent* Interactable, EStencilsUsage StencilUsage, bool UseThickOutline);
    
};

