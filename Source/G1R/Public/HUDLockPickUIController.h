#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "HUDLockPickUIController.generated.h"

class ULockPickUIWidget;

UCLASS(BlueprintType)
class UHUDLockPickUIController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    ULockPickUIWidget* m_LockPickUIWidget;
    
public:
    UHUDLockPickUIController();

protected:
    UFUNCTION()
    void OnLockPickUIFadedOut();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
};

