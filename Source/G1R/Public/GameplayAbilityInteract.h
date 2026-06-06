#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityInteract.generated.h"

class AActor;

UCLASS()
class G1R_API UGameplayAbilityInteract : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AActor* m_InteractionActor;
    
    UPROPERTY(BlueprintReadOnly)
    TWeakObjectPtr<AActor> m_AvatarActor;
    
public:
    UGameplayAbilityInteract();

private:
    UFUNCTION()
    void EndAndCall();
    
};

