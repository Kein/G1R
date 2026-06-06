#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GlossarySubfilterData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGlossarySubfilterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag m_FilterTag;
    
    UPROPERTY(BlueprintReadWrite)
    TSoftObjectPtr<UTexture2D> m_IconImage;
    
    UPROPERTY(BlueprintReadWrite)
    FText m_DisplayName;
    
    G1R_API FGlossarySubfilterData();
};

