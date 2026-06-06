#pragma once
#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GothicActorComponentInterface.h"
#include "GothicInputComponent.generated.h"

class UGothicAbilitySystemComponent;
class UGothicInputConfig;

UCLASS(NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGothicInputComponent : public UEnhancedInputComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UGothicInputConfig* m_GothicInputConfig;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_GothicASC;
    
    UPROPERTY()
    int32 m_IMCPriority;
    
public:
    UGothicInputComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnWindowFocusChanged(bool bIsFocused);
    

    // Fix for true pure virtual functions not being implemented
};

