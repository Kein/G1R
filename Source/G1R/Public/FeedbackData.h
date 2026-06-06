#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "FreezeParams.h"
#include "Templates/SubclassOf.h"
#include "FeedbackData.generated.h"

class UCameraShakeBase;
class UForceFeedbackEffect;

UCLASS(BlueprintType)
class UFeedbackData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UCameraShakeBase>> m_AttackCameraShakeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UForceFeedbackEffect>> m_AttackRumbleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FFreezeParams> m_AttackFreezeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSubclassOf<UCameraShakeBase>> m_HitCameraShakeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UForceFeedbackEffect>> m_HitRumbleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FFreezeParams> m_HitFreezeParams;
    
public:
    UFeedbackData();

    UFUNCTION(BlueprintPure)
    UForceFeedbackEffect* GetHitRumble(const FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintPure)
    FFreezeParams GetHitFreezeParams(const FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCameraShakeBase> GetHitCameraShake(const FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintPure)
    UForceFeedbackEffect* GetAttackRumble(const FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintPure)
    FFreezeParams GetAttackFreezeParams(const FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCameraShakeBase> GetAttackCameraShake(FGameplayTag HitType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddHitFreezeFrame(FGameplayTag HitType, float CustomSlow, float FreezeDuration, float BlendOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddCameraShake(FGameplayTag HitType, TSubclassOf<UCameraShakeBase> Params);
    
    UFUNCTION(BlueprintCallable)
    void AddAttackFreezeFrame(FGameplayTag HitType, float CustomSlow, float FreezeDuration, float BlendOutDuration);
    
};

