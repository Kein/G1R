#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "Templates/SubclassOf.h"
#include "FloatingItemSelector.generated.h"

class UFloatingItemClassSelectorConfig;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UFloatingItemSelector : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UFloatingItemClassSelectorConfig>> m_ItemEffectActorClassPtr;
    
    UFloatingItemSelector();

};

