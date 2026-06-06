#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "EffectComponentConfiguration.generated.h"

class UEffectComponentBase;

UCLASS(EditInlineNew)
class G1R_API UEffectComponentConfiguration : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UEffectComponentBase> m_EffectComponent;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<UObject> m_EffectActorClass;
    
    UEffectComponentConfiguration();

};

