#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayEventDynamicMulticastDelegateDelegate.h"
#include "DelegateHandleContainer.generated.h"

UCLASS()
class G1R_API UDelegateHandleContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameplayEventDynamicMulticastDelegate OnEventTag;
    
    UDelegateHandleContainer();

};

