#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ProjectileVisual.h"
#include "ThrowableVisual.generated.h"

class UGothicAbilitySystemComponent;
class URotatingMovementComponent;
class UStaticMeshComponent;

UCLASS()
class G1R_API AThrowableVisual : public AProjectileVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UStaticMeshComponent* m_MeshComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URotatingMovementComponent* m_RotatingMovementComp;
    
public:
    AThrowableVisual(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplyDamage_Scriptable(UGothicAbilitySystemComponent* ABSource, UGothicAbilitySystemComponent* ABTarget);
    
    UFUNCTION(BlueprintNativeEvent)
    FGameplayTag GetImpactType_Scriptable();
    
};

