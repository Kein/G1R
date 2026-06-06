#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityInteractSecondary.generated.h"

class AActor;

UCLASS()
class G1R_API UGameplayAbilityInteractSecondary : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* m_InteractionActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_AvatarActor;
    
public:
    UGameplayAbilityInteractSecondary();

private:
    UFUNCTION()
    void EndAndCall();
    
};

