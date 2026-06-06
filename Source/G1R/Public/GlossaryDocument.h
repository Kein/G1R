#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnGlossaryUnseenStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "WritingDocument.h"
#include "GlossaryDocument.generated.h"

class UGlossaryCategory;
class UGlossarySubcategory;
class UTexture2D;

UCLASS()
class G1R_API UGlossaryDocument : public UWritingDocument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnGlossaryUnseenStateChanged m_OnUnseenStateChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UGlossaryCategory> m_CategoryClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UGlossarySubcategory>> m_SubcategoryClasses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_SortOrder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_ThumbnailImage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_BannerImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> m_InitialSegmentNameCrumbs;
    
public:
    UGlossaryDocument();

    UFUNCTION(BlueprintPure)
    bool HasInitialSegment() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetCategoryIconImage() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetCategoryFilterTag() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCategoryDescription() const;
    
};

