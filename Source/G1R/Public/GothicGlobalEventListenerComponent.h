#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameplayTagContainer.h"
#include "GothicGenericMagicComponent.h"
#include "GothicGlobalEventListenerComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicGlobalEventListenerComponent : public UGothicGenericMagicComponent {
    GENERATED_BODY()
public:
    UGothicGlobalEventListenerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterListener(FGameplayMessageListenerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    FGameplayMessageListenerHandle RegisterListener(FGameplayTag Channel, UObject* UserObject, FName FunctionName);
    
};

