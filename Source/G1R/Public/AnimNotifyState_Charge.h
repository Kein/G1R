#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_Charge.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_Charge : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString m_HitCollisionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetSearchRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetSearchAngle;
    
    UAnimNotifyState_Charge();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTargetSearchAngle(float TargetSearchAngle) const;
    
};

