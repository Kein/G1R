#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ItemVirtualData.h"
#include "OnActorNoLongerSensedDelegate.h"
#include "OnActorSensedDelegate.h"
#include "OnActorsInSensorsDelegate.h"
#include "Templates/SubclassOf.h"
#include "InteractSensor.generated.h"

class AAIAgentCharacter;
class AActor;
class UCarryComponent;
class UInteractiveComponent;
class UItemRecipeDefinition;
class USensorConfigDefinition;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UInteractSensor : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SensingInterval;
    
    UPROPERTY(Instanced)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY()
    AActor* m_FilterActor;
    
    UPROPERTY(Replicated)
    AActor* m_CurrentInteractionActor;
    
    UPROPERTY()
    TSet<AAIAgentCharacter*> AiAgentAroundSetBefore;
    
    UPROPERTY(Instanced)
    UInteractiveComponent* m_PreviousNearObject;
    
    UPROPERTY()
    float m_AIAgentsNameDistance;
    
private:
    UPROPERTY()
    FItemVirtualData m_EquippedObject;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UItemRecipeDefinition>> m_KnownRecipes;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorSensed OnActorSensed;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorNoLongerSensed OnActorNoLongerSensed;
    
    UPROPERTY(BlueprintAssignable)
    FOnActorsInSensors OnActorsInSensors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USensorConfigDefinition* m_SensorConfigDefinition;
    
public:
    UInteractSensor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSensingUpdatesEnabled(const bool bEnabled);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_UnPossessed();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_OnPosses(bool IsPlayerControlled);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetNearestInteraction();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndSetTicks(bool IsPlayerControlled, bool forced);
    
    UFUNCTION(BlueprintCallable)
    bool CanInteract();
    
};

