#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "GlossarySubfilterData.h"
#include "GlossarySubfilterWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UGlossarySubfilterWidget : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCurrentIndexChangedEventBP, int32, _Index, const FGlossarySubfilterData&, _Data);
    
    UPROPERTY(BlueprintAssignable)
    FCurrentIndexChangedEventBP m_OnCurrentIndexChangedBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_Wrap;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FGlossarySubfilterData> m_Data;
    
    UPROPERTY(Transient)
    FGlossarySubfilterData m_InvalidData;
    
public:
    UGlossarySubfilterWidget();

    UFUNCTION(BlueprintCallable)
    void SetSubfilters(const TArray<FGlossarySubfilterData>& _SubfilterData);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentIndex(int32 _NewIndex, bool _Force);
    
    UFUNCTION(BlueprintCallable)
    void SelectPrevious();
    
    UFUNCTION(BlueprintCallable)
    void SelectNext();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSubfiltersChanged_BP(const TArray<FGlossarySubfilterData>& _Data);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentIndexChanged_BP(int32 _Index, const FGlossarySubfilterData& _Data);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasSubfilters() const;
    
    UFUNCTION(BlueprintPure)
    FGlossarySubfilterData GetSubfilterAtIndex(int32 _Index) const;
    
    UFUNCTION(BlueprintPure)
    FGlossarySubfilterData GetCurrentSubfilter() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentIndex() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSubfilters();
    
    UFUNCTION(BlueprintPure)
    bool CanSelectPrevious() const;
    
    UFUNCTION(BlueprintPure)
    bool CanSelectNext() const;
    
};

