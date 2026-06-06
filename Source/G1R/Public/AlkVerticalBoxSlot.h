#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/PanelSlot.h"
#include "Components/SlateWrapperTypes.h"
#include "AlkVerticalBoxSlot.generated.h"

UCLASS(BlueprintType)
class G1R_API UAlkVerticalBoxSlot : public UPanelSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin m_Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize m_Size;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> m_HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> m_VerticalAlignment;
    
public:
    UAlkVerticalBoxSlot();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> _VerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FSlateChildSize _Size);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin _Padding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> _HorizontalAlignment);
    
};

