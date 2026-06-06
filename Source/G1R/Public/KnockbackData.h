#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "KnockbackData.generated.h"

class UScriptGameplayEffect;

UCLASS(BlueprintType, EditInlineNew)
class UKnockbackData : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KnockbackFloorRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_KnockbackTopRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_MontageLoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_MontageEndLoopSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UScriptGameplayEffect> m_KnockbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RootMotionMultiplierBreakArmorHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_RootMotionMultiplierKnockback;
    
    UKnockbackData();

    UFUNCTION(BlueprintPure)
    float GetStunnedRandomTime() const;
    
};

