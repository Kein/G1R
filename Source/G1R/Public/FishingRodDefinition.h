#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "FishingRodDefinition.generated.h"

class UUserWidget;

UCLASS(Abstract, EditInlineNew)
class G1R_API UFishingRodDefinition : public UItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LowResistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_NearlyBrokenResistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_PowerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UUserWidget> m_Widget;
    
public:
    UFishingRodDefinition();

};

