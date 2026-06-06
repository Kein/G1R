#pragma once
#include "CoreMinimal.h"
#include "HUDControllerBase.h"
#include "OnBookClosedDelegate.h"
#include "Templates/SubclassOf.h"
#include "HUDAnimatedBookUIController.generated.h"

class AGothicPlayerControllerBase;
class UAnimatedBookUIWidget;
class UBookCoverConfiguration;
class UCommonActivatableWidget;
class UHUDAnimatedBookUIController;
class UObject;
class UTexture2D;
class UWritingDocument;
class UWritingUIWidget;

UCLASS(BlueprintType)
class UHUDAnimatedBookUIController : public UHUDControllerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TSubclassOf<UCommonActivatableWidget> m_WidgetClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UCommonActivatableWidget> m_WritingWidget;
    
    UPROPERTY(Transient)
    AGothicPlayerControllerBase* m_GothicPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UAnimatedBookUIWidget* m_AnimatedBookUIWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UWritingUIWidget* m_WritingUIWidget;
    
public:
    UPROPERTY(BlueprintCallable)
    FOnBookClosed m_OnBookClosed;
    
    UHUDAnimatedBookUIController();

    UFUNCTION(BlueprintCallable)
    bool ShowWritingWidget(TSubclassOf<UWritingDocument> _DocumentToUse, TSoftObjectPtr<UTexture2D> _BackgroundTexture);
    
    UFUNCTION(BlueprintCallable)
    bool ShowBookWidget(TSubclassOf<UWritingDocument> _DocumentToUse, UBookCoverConfiguration* _BookCoverConfig);
    
protected:
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintName();
    
public:
    UFUNCTION(BlueprintCallable)
    UAnimatedBookUIWidget* GetAnimatedBookUIWidget();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHUDAnimatedBookUIController* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION()
    void BookClosed();
    
};

