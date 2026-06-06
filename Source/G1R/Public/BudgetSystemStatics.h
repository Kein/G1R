#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BudgetSystemDynamicTickDelegateDelegate.h"
#include "BudgetSystemStatics.generated.h"

class AActor;
class UActorComponent;

UCLASS(BlueprintType)
class UBudgetSystemStatics : public UObject {
    GENERATED_BODY()
public:
    UBudgetSystemStatics();

    UFUNCTION(BlueprintCallable)
    static void UnregisterBudgetedTickingForObject(FName WorkloadName, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterBudgetedTickingForComponent(FName WorkloadName, UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterBudgetedTickingForActor(FName WorkloadName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterBudgetedTickingForComponent(FName WorkloadName, UActorComponent* Component, float TickRateSeconds, FBudgetSystemDynamicTickDelegate OnTick);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterBudgetedTickingForActor(FName WorkloadName, AActor* Actor, float TickRateSeconds, FBudgetSystemDynamicTickDelegate OnTick);
    
    UFUNCTION(BlueprintCallable)
    static void EndTickRequest();
    
    UFUNCTION(BlueprintCallable)
    static void EndHighPriorityTickRequest();
    
    UFUNCTION(BlueprintCallable)
    static void BumpTickRequestToHighPriority(const UObject* Context, FName WorkloadName, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static bool BeginTickRequest(const UObject* Context, FName WorkloadName, FName Key, bool bHighPriority);
    
    UFUNCTION(BlueprintCallable)
    static bool BeginHighPriorityTickRequest(const UObject* Context, FName WorkloadName, FName Key);
    
};

