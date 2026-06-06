#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "CharacterEffectComponentsConfig.generated.h"

class UEffectComponentConfiguration;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UCharacterEffectComponentsConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UEffectComponentConfiguration>> m_EffectComponentsConfiguration;
    
public:
    UCharacterEffectComponentsConfig();

};

