#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMSFootLockId.h"
#include "MSFootLockData.h"
#include "MSFootLockManager.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MOTIONSYMPHONY_API UMSFootLockManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TMap<EMSFootLockId, FMSFootLockData> FootLockMap;
    
    UMSFootLockManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockFoot(const EMSFootLockId FootId);
    
    UFUNCTION(BlueprintCallable)
    void ResetLockingState();
    
    UFUNCTION(BlueprintCallable)
    void LockFoot(const EMSFootLockId FootId, const float Duration);
    
    UFUNCTION(BlueprintPure)
    bool IsFootLocked(const EMSFootLockId FootId) const;
    
};

