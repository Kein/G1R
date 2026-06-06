#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDDisplayBossHealthBarController.generated.h"

class AGothicCharacter;
class UHUDBossInformationWidget;
class UHUDDisplayBossHealthBarController;
class UObject;
class UUserWidget;

UCLASS(BlueprintType)
class G1R_API UHUDDisplayBossHealthBarController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<UUserWidget> m_WidgetClass;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(Instanced)
    UHUDBossInformationWidget* m_BossInformationWidget;
    
    UPROPERTY()
    float m_OverrideMaxHealthValue;
    
public:
    UHUDDisplayBossHealthBarController();

    UFUNCTION(BlueprintCallable)
    void UpdateInfoWithoutVisibilityChange(AGothicCharacter* newCharacterToGetInfoFrom);
    
    UFUNCTION(BlueprintCallable)
    void ShowWidget(AGothicCharacter* newCharacterToGetInfoFrom);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideMaxHealthValue(float overrideValue);
    
    UFUNCTION(BlueprintCallable)
    void HideWidget();
    
protected:
    UFUNCTION()
    void HandleHUDSettingsChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContextObject"))
    static UHUDDisplayBossHealthBarController* Get(const UObject* _WorldContextObject);
    
};

