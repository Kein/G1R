#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHorizontalAlignmenet.h"
#include "EVerticalAlignmenet.h"
#include "BookVisualConfiguration.generated.h"

class UFont;
class UTexture2D;

USTRUCT(BlueprintType)
struct FBookVisualConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_LeftBorder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_RightBorder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_TopLeftCorner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_TopRightCorner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_BottomLeftCorner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_BottomRightCorner;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_CoverLogo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_BackgroundTexture;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FColor m_BookTintColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_BookDamageState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UFont> m_BookTitleFont;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BookTitleFontSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor m_BookTitleColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BookTitleOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EHorizontalAlignmenet m_TitleHorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVerticalAlignmenet m_TitleVerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BookTitleShadowIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_BookTitleWearIntensity;
    
    G1R_API FBookVisualConfiguration();
};

