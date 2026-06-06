#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_ExecutionMagnet.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_ExecutionMagnet : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_TargetSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_WeaponSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_HitboxName;
    
    UAnimNotifyState_ExecutionMagnet();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetWeaponSocket(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTargetSocket(FName SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetHitBoxName(FName HitBoxName) const;
    
};

