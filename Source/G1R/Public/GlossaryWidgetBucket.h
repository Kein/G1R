#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GlossaryWidgetBucket.generated.h"

class UGlossaryCategory;
class UGlossaryDocument;
class UGlossarySubcategory;

USTRUCT(BlueprintType)
struct FGlossaryWidgetBucket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag m_FilterTag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TSubclassOf<UGlossaryCategory> m_CategoryClass;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UGlossaryDocument*> m_Documents;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<TSubclassOf<UGlossarySubcategory>> m_Subcategories;
    
    G1R_API FGlossaryWidgetBucket();
};

