#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESettingsType.h"
#include "SettingDescription.h"
#include "SettingObject.generated.h"

UCLASS(Abstract, BlueprintType, EditInlineNew)
class USettingObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText m_DisplayName;
    
    UPROPERTY(EditAnywhere)
    FSettingDescription m_Description;
    
    UPROPERTY(EditAnywhere)
    int32 m_PlatformExclusivityMask;
    
    UPROPERTY(EditAnywhere)
    int32 m_InputAvailabilityMask;
    
public:
    USettingObject();

    UFUNCTION(BlueprintCallable)
    void RevertToLastConfirmedValue();
    
    UFUNCTION(BlueprintPure)
    bool IsSupported() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsPlattformSupported() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInputModeSupported() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAvailable() const;
    
    UFUNCTION(BlueprintPure)
    bool HideUnavailable() const;
    
    UFUNCTION(BlueprintPure)
    ESettingsType GetSettingsType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintPure)
    FSettingDescription GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void ConfirmValue();
    
};

