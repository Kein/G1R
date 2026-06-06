#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "PickpocketPerceptionSightSettings.h"
#include "GameplayAbilityPickpocket.generated.h"

class AActor;

UCLASS()
class G1R_API UGameplayAbilityPickpocket : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_DetectionRadius;
    
    UPROPERTY(EditAnywhere)
    float m_DetectionAngleDegrees;
    
    UPROPERTY(EditAnywhere)
    FPickpocketPerceptionSightSettings m_Sight;
    
    UPROPERTY(Transient)
    AActor* m_targetActor;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
public:
    UGameplayAbilityPickpocket();

protected:
    UFUNCTION()
    void OnItemPicked(FGameplayEventData Payload);
    
};

