#pragma once
#include "CoreMinimal.h"
#include "LightweightSceneCapture2D.h"
#include "UObject/NoExportTypes.h"
#include "EBookCaptureAnimState.h"
#include "EBookCapturePage.h"
#include "OnBookInitializedDelegate.h"
#include "OnPageFlippedDelegate.h"
#include "PageContent.h"
#include "Templates/SubclassOf.h"
#include "BookCaptureActor.generated.h"

class UAnimSequence;
class UBookCoverConfiguration;
class UDocument;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USkeletalMeshComponent;
class UTexture;
class UTextureRenderTarget2D;
class UUserWidget;
class UWritingDocument;

UCLASS(MinimalAPI)
class ABookCaptureActor : public ALightweightSceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 m_MaxNumPageFlips;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 m_CurrentPageFlip;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 m_NumPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CurrentLeftPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_CurrentRightPage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDocument* m_CurrentDocument;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUserWidget* m_BookCoverWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUserWidget* m_LeftPageWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UUserWidget* m_RightPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UUserWidget* m_BlankPageWidget;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    TArray<UUserWidget*> m_PageWidgets;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnPageFlipped m_OnPageFlipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* m_BookMaterialTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* m_BaseTextureOverride;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FPageContent> m_OrderedPages;
    
private:
    UPROPERTY(EditAnywhere)
    int32 m_RenderTargetSize_PageX;
    
    UPROPERTY(EditAnywhere)
    int32 m_RenderTargetSize_PageY;
    
    UPROPERTY(EditAnywhere, Instanced)
    USkeletalMeshComponent* m_BookMeshComponent;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Animation_OpenBook;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Animation_CloseBook;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Animation_PrevPage;
    
    UPROPERTY(EditAnywhere)
    UAnimSequence* m_Animation_NextPage;
    
    UPROPERTY(EditAnywhere)
    FName m_BaseTextureName;
    
    UPROPERTY(EditAnywhere)
    FName m_TintColorParam;
    
    UPROPERTY(EditAnywhere)
    TMap<EBookCapturePage, FName> m_PageMaterialParamNames;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_DynamicBookMaterial;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UTextureRenderTarget2D*> m_RendertargetForPage;
    
    UPROPERTY(EditAnywhere)
    UTextureRenderTarget2D* m_FinalRenderTarget;
    
    UPROPERTY(Instanced, Transient)
    TArray<UUserWidget*> m_WidgetForPage;
    
    UPROPERTY(BlueprintAssignable)
    FOnBookInitialized m_OnBookInitialized;
    
public:
    ABookCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTintColor(FLinearColor _Color);
    
    UFUNCTION(BlueprintCallable)
    void SetPageWidgets(EBookCapturePage _Page, UUserWidget* _PageWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialPages(UUserWidget* _WidgetCover);
    
    UFUNCTION(BlueprintCallable)
    void OnBookWidgetConstructed();
    
    UFUNCTION(BlueprintCallable)
    void OnBookWidgetClosed();
    
    UFUNCTION()
    void InitializeBook(TSubclassOf<UWritingDocument> _Document, UBookCoverConfiguration* _BookCoverConfig);
    
    UFUNCTION(BlueprintPure)
    EBookCaptureAnimState GetAnimState() const;
    
    UFUNCTION(BlueprintCallable)
    void EnsureWidgetSet(EBookCapturePage _Page, UUserWidget* _Widget, bool _RequireInit);
    
    UFUNCTION(BlueprintPure)
    UUserWidget* CreateWidget(TSubclassOf<UUserWidget> _WidgetClass);
    
    UFUNCTION(BlueprintPure)
    bool CanAnimateToPrevPage() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAnimateToNextPage() const;
    
    UFUNCTION(BlueprintCallable)
    void CallRebuildWidget(UUserWidget* _PageWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TestPreviousPage();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_TestNextPage();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AnimateOpenBook();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_AnimateCloseBook();
    
public:
    UFUNCTION(BlueprintCallable)
    void AnimateToPreviousPage();
    
    UFUNCTION(BlueprintCallable)
    void AnimateToNextPage();
    
    UFUNCTION(BlueprintCallable)
    void AnimatePageTo(bool _NextPage);
    
    UFUNCTION(BlueprintCallable)
    void AnimateOpenBook();
    
    UFUNCTION(BlueprintCallable)
    void AnimateCloseBook();
    
};

