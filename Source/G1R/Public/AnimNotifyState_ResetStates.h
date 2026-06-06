#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_ResetStates.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ResetStates : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ForceBlendOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_ForceContinuePlaying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BlendoutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BlockingBlendOutTime;
    
public:
    UAnimNotifyState_ResetStates();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetForceContinuePlaying(bool forceContinuePlaying) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetForceBlendOut(bool BlendOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBlockingBlendOutTime(float blockBlendOutTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBlendOutTime(float BlendOutTime) const;
    
};

