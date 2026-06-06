#pragma once
#include "CoreMinimal.h"
#include "EffectComponentBase.h"
#include "FloatingItemEffectComponent.generated.h"

class UFloatingItemSelector;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UFloatingItemEffectComponent : public UEffectComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UFloatingItemSelector* m_FloatingItemSelector;
    
    UPROPERTY()
    bool m_Activated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StopInmediateGoToHandTime;
    
public:
    UFloatingItemEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RestartVisuals();
    
    UFUNCTION()
    void OnDeactivateEffectCompleted();
    
};

