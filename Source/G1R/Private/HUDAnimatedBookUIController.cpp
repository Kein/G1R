#include "HUDAnimatedBookUIController.h"
#include "Templates/SubclassOf.h"

UHUDAnimatedBookUIController::UHUDAnimatedBookUIController() {
    this->m_WidgetClass = NULL;
    this->m_WritingWidget = NULL;
    this->m_GothicPlayerController = NULL;
    this->m_AnimatedBookUIWidget = NULL;
    this->m_WritingUIWidget = NULL;
}

bool UHUDAnimatedBookUIController::ShowWritingWidget(TSubclassOf<UWritingDocument> _DocumentToUse, TSoftObjectPtr<UTexture2D> _BackgroundTexture) {
    return false;
}

bool UHUDAnimatedBookUIController::ShowBookWidget(TSubclassOf<UWritingDocument> _DocumentToUse, UBookCoverConfiguration* _BookCoverConfig) {
    return false;
}

FString UHUDAnimatedBookUIController::GetBlueprintName() {
    return TEXT("");
}

UAnimatedBookUIWidget* UHUDAnimatedBookUIController::GetAnimatedBookUIWidget() {
    return NULL;
}

UHUDAnimatedBookUIController* UHUDAnimatedBookUIController::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UHUDAnimatedBookUIController::BookClosed() {
}


