#include "BookCaptureActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Templates/SubclassOf.h"

ABookCaptureActor::ABookCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MaxNumPageFlips = 2;
    this->m_CurrentPageFlip = 0;
    this->m_NumPages = 0;
    this->m_CurrentLeftPage = 0;
    this->m_CurrentRightPage = 1;
    this->m_CurrentDocument = NULL;
    this->m_BookCoverWidget = NULL;
    this->m_LeftPageWidget = NULL;
    this->m_RightPageWidget = NULL;
    this->m_BlankPageWidget = NULL;
    this->m_BookMaterialTemplate = NULL;
    this->m_BaseTextureOverride = NULL;
    this->m_RenderTargetSize_PageX = 1024;
    this->m_RenderTargetSize_PageY = 1450;
    this->m_BookMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BookMesh"));
    this->m_Animation_OpenBook = NULL;
    this->m_Animation_CloseBook = NULL;
    this->m_Animation_PrevPage = NULL;
    this->m_Animation_NextPage = NULL;
    this->m_BaseTextureName = TEXT("BaseTexture");
    this->m_TintColorParam = TEXT("TintColor");
    this->m_DynamicBookMaterial = NULL;
    this->m_FinalRenderTarget = NULL;
    this->m_BookMeshComponent->SetupAttachment(RootComponent);
}

void ABookCaptureActor::SetTintColor(FLinearColor _Color) {
}

void ABookCaptureActor::SetPageWidgets(EBookCapturePage _Page, UUserWidget* _PageWidget) {
}

void ABookCaptureActor::SetInitialPages(UUserWidget* _WidgetCover) {
}

void ABookCaptureActor::OnBookWidgetConstructed() {
}

void ABookCaptureActor::OnBookWidgetClosed() {
}

void ABookCaptureActor::InitializeBook(TSubclassOf<UWritingDocument> _Document, UBookCoverConfiguration* _BookCoverConfig) {
}

EBookCaptureAnimState ABookCaptureActor::GetAnimState() const {
    return EBookCaptureAnimState::Closed;
}

void ABookCaptureActor::EnsureWidgetSet(EBookCapturePage _Page, UUserWidget* _Widget, bool _RequireInit) {
}

UUserWidget* ABookCaptureActor::CreateWidget(TSubclassOf<UUserWidget> _WidgetClass) {
    return NULL;
}

bool ABookCaptureActor::CanAnimateToPrevPage() const {
    return false;
}

bool ABookCaptureActor::CanAnimateToNextPage() const {
    return false;
}

void ABookCaptureActor::CallRebuildWidget(UUserWidget* _PageWidget) {
}





void ABookCaptureActor::AnimateToPreviousPage() {
}

void ABookCaptureActor::AnimateToNextPage() {
}

void ABookCaptureActor::AnimatePageTo(bool _NextPage) {
}

void ABookCaptureActor::AnimateOpenBook() {
}

void ABookCaptureActor::AnimateCloseBook() {
}


