#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GothicRiderComponent.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicRiderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicCharacter> m_Character;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<AGothicCharacter> m_mountCharacter;
    
public:
    UGothicRiderComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMountCharacter(AGothicCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetRiderCharacter() const;
    
    UFUNCTION(BlueprintPure)
    AGothicCharacter* GetMountCharacter() const;
    
};

