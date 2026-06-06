#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "3DDebugCharacterWidget.generated.h"

class AGothicCharacter;
class UAbilitySystemComponent;
class UDataModule_Combat;
class UImage;
class UProgressBar;
class UTextBlock;

UCLASS(EditInlineNew)
class G1R_API U3DDebugCharacterWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UProgressBar* HealthBar;
    
    UPROPERTY(Instanced)
    UProgressBar* SuperArmorBar;
    
    UPROPERTY(Instanced)
    UTextBlock* StateLabel;
    
    UPROPERTY(Instanced)
    UImage* DirIcon;
    
    UPROPERTY(Instanced)
    UTextBlock* HealthNumberLabel;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Combat> m_DataModule_Combat;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbComp;
    
public:
    U3DDebugCharacterWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
    UFUNCTION(BlueprintCallable)
    void HideHealthBar();
    
};

