#pragma once
#include "CoreMinimal.h"
#include "DifficultySettings.h"
#include "ResourcesDifficultySettings.generated.h"

UCLASS()
class G1R_API UResourcesDifficultySettings : public UDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_PlayerBuyModifier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_PlayerSellModifier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_RegenTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_SurPlusValueModifier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_OreSpendingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_MiniumPurchasePower;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_MaterialsGuaranteedRatio;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_ConsumablesGuaranteedRatio;
    
    UResourcesDifficultySettings();

    UFUNCTION(BlueprintPure)
    float GetPlayerSellModifier() const;
    
    UFUNCTION(BlueprintPure)
    float GetPlayerBuyModifier() const;
    
};

