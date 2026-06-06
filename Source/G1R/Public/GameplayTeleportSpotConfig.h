#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GothicBaseConfig.h"
#include "GameplayTeleportSpotConfig.generated.h"

class UAnimMontage;

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class G1R_API UGameplayTeleportSpotConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FGameplayTag, TSoftObjectPtr<UAnimMontage>> m_MontageMap;
    
public:
    UGameplayTeleportSpotConfig();

};

