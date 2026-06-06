#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAttributeProgressBarWidget.h"
#include "SpellsManaCost.h"
#include "PlayerBarHealthMana.generated.h"

UCLASS(EditInlineNew)
class G1R_API UPlayerBarHealthMana : public UGameplayAttributeProgressBarWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool m_IsOutOfMana;
    
public:
    UPlayerBarHealthMana();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCheckManaConsumption(bool EnableCheckManaConsumption);
    
    UFUNCTION()
    void OnOutMana(FGameplayTag GameplayTag, int32 I);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateSpellManaCost(FSpellsManaCost manaCost);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_UpdateRecoveryOverTime(double FinalPercentageValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnTryCastOutOfMana();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPreviewAttributeValue(float currentPercentageValue, float newPercentageValue);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOutManaStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOutManaEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHidePreview();
    
};

