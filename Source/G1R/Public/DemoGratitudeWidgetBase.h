#pragma once
#include "CoreMinimal.h"
#include "GothicCommonActivatableWidget.h"
#include "DemoGratitudeWidgetBase.generated.h"

class UTexture2D;

UCLASS(Abstract, EditInlineNew, Config=Game)
class G1R_API UDemoGratitudeWidgetBase : public UGothicCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString m_FolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UTexture2D>> m_BackgroundImages;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bShutdownGameAfterTimeoutAndGratitudeScreen;
    
public:
    UDemoGratitudeWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void RequestRandomBackgroundTexture();
    
    UFUNCTION(BlueprintCallable)
    void GoBackToMainMenu();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBackgroundTextureReady(UTexture2D* _Texture);
    
};

