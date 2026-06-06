#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "HUDDisplayInteract.generated.h"

UINTERFACE(Blueprintable)
class UHUDDisplayInteract : public UInterface {
    GENERATED_BODY()
};

class IHUDDisplayInteract : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateMainInteractions(const FGameplayTag MainInteract, const FGameplayTag SecondInteract, const FGameplayTag FailMainInteract, const FGameplayTag FailSecondInteract, bool IsACrime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DisplayName(const FText& Name);
    
};

