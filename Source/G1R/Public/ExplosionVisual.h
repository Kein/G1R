#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "ExplosionVisual.generated.h"

class UGothicFXComponent;

UCLASS(Abstract)
class G1R_API AExplosionVisual : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UGothicFXComponent* m_FXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_FXTag;
    
public:
    AExplosionVisual(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExplode(const FHitResult& HitResult, int32 spellLevel);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnExplode(const FHitResult& HitResult, int32 spellLevel);
    
};

