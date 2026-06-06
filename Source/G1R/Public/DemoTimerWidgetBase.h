#pragma once
#include "CoreMinimal.h"
#include "AlkUserWidget.h"
#include "DemoTimerWidgetBase.generated.h"

UCLASS(Abstract, EditInlineNew, Config=Game)
class G1R_API UDemoTimerWidgetBase : public UAlkUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTimerExpiredEventBP);
    
    UPROPERTY(BlueprintAssignable)
    FTimerExpiredEventBP OnTimerExpiredBP;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool m_IsEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_Duration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> m_SpecialRemainingTimes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_AllowTimerStart;
    
public:
    UDemoTimerWidgetBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTimerExpired();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpecialTimeReached(int32 _RemainingTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRemainingTimeChanged(int32 _RemainingTime);
    
};

