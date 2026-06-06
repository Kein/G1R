#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "NPCOverheadInfoWidget.generated.h"

UCLASS(EditInlineNew)
class G1R_API UNPCOverheadInfoWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealthDeltaSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float HealthBarPercentCurrent;
    
    UPROPERTY(BlueprintReadOnly)
    float HealthBarPercentLow;
    
public:
    UNPCOverheadInfoWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void UpdateObjectInteraction(const FGameplayTag& interactMain, const FGameplayTag& interactSecondary, const FGameplayTag& failMain, const FGameplayTag& failSecondary);
    
    UFUNCTION()
    void UpdateHealthBar(float DeltaTime, float NewHealth, float MaxHealth);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowHealthBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFeatureScale(float _Scale);
    
    UFUNCTION()
    void SetCharacterName(FText CharName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideHealthBar();
    
};

