#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityTrading.generated.h"

class AActor;
class UGothicTraderPayload;
class UHUDTradingController;

UCLASS()
class G1R_API UGameplayAbilityTrading : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    AActor* m_TraderActor;
    
protected:
    UPROPERTY()
    UHUDTradingController* m_HUDTradingController;
    
    UPROPERTY(BlueprintReadOnly)
    UGothicTraderPayload* m_TraderPayload;
    
public:
    UGameplayAbilityTrading();

protected:
    UFUNCTION()
    void OnUIDoPurchase();
    
    UFUNCTION()
    void OnCloseScreenCallback();
    
};

