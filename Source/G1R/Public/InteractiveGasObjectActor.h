#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagContainer.h"
#include "InteractiveObjectActor.h"
#include "Templates/SubclassOf.h"
#include "InteractiveGasObjectActor.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;
class UGothicAbilitySystemComponent;
class UGothicFXComponent;

UCLASS()
class G1R_API AInteractiveGasObjectActor : public AInteractiveObjectActor, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UGameplayEffect> OnOverlapGameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UGothicFXComponent* m_FXComponent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, VisibleAnywhere)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    AInteractiveGasObjectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetLit(bool mustLit, bool isPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnImpact();
    
    UFUNCTION(NetMulticast, Reliable)
    void NetMulticast_SetLit(bool mustLit, bool isPlayer);
    
    UFUNCTION(BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void CanSetOnFire(bool canSet);
    

    // Fix for true pure virtual functions not being implemented
};

