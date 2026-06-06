#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScrollComponent.generated.h"

class ATransformSpellItemVisual;
class UAnimMontage;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UScrollComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ATransformSpellItemVisual* m_ScrollVisual;
    
    UPROPERTY()
    UAnimMontage* m_AnimMontage;
    
public:
    UScrollComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsCastFail();
    
private:
    UFUNCTION()
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayScrollAnimationSyncWith(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastPlayScrollAnimation(UAnimMontage* AnimMontage);
    
};

