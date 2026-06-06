#pragma once
#include "CoreMinimal.h"
#include "VFXCue.h"
#include "FloatingRune_VFXCue.generated.h"

class AGothicCharacter;
class AItemVisual;
class URotatingMovementComponent;

UCLASS(Abstract)
class G1R_API AFloatingRune_VFXCue : public AVFXCue {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    AItemVisual* m_ItemVisual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    URotatingMovementComponent* m_RotatingMovementComp;
    
public:
    AFloatingRune_VFXCue(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnItemVisual(AGothicCharacter* CharacterToAttach);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnStartRecoveringRune(float totalCastingTime);
    
};

