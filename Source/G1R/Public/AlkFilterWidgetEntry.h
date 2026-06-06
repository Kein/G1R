#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EAlkFilterWidgetEntryVisibility.h"
#include "AlkFilterWidgetEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct G1R_API FAlkFilterWidgetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_FilterTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_IconImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAlkFilterWidgetEntryVisibility m_Visibility;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CanBeMarkedUnseen;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_SortOrder;
    
    FAlkFilterWidgetEntry();
};

