#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AlkFilterCategory.generated.h"

class UTexture2D;

UCLASS(Abstract, BlueprintType)
class G1R_API UAlkFilterCategory : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag m_FilterTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText m_Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_IconImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_SortOrder;
    
public:
    UAlkFilterCategory();

    UFUNCTION(BlueprintPure)
    int32 GetSortOrder() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconImage() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetFilterTag() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
};

