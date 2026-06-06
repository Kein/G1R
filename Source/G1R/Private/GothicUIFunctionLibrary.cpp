#include "GothicUIFunctionLibrary.h"

UGothicUIFunctionLibrary::UGothicUIFunctionLibrary() {
}

void UGothicUIFunctionLibrary::Viewport_SetMousePosition(const APlayerController* ThePC, const float& PosX, const float& PosY) {
}

bool UGothicUIFunctionLibrary::TryGetCurrentKeyIcon(FSlateBrush& _IconBrush, const ULocalPlayer* _LocalPlayer, FKey _Key) {
    return false;
}

void UGothicUIFunctionLibrary::GetSkillTagDisplayText(FGameplayTag _SkillTag, FText& _DisplayName, FText& _Description, FText& _MasteryDisplayName, FText& _MasteryDescription, int32& _MasteryLevel) {
}

void UGothicUIFunctionLibrary::GetSkillOreCost(const FGameplayTag& _SkillTag, int32& _OreCost) {
}

void UGothicUIFunctionLibrary::GetSkillLPCost(const FGameplayTag& _SkillTag, int32& _LPCost) {
}

FGameplayTag UGothicUIFunctionLibrary::GetOwnedSkillMastery(const AActor* _Owner, FGameplayTag _SkillTag) {
    return FGameplayTag{};
}

APlayerController* UGothicUIFunctionLibrary::GetLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

void UGothicUIFunctionLibrary::GetLearningSkillTooltipText(FGameplayTag _SkillTag, TArray<FText>& _SkillDescriptions) {
}

void UGothicUIFunctionLibrary::GetGameplayTagDisplayText(const FGameplayTag& _GameplayTag, FText& _DisplayName, FText& _Description) {
}

FSlateBrush UGothicUIFunctionLibrary::GetCurrentInputActionIcon(const ULocalPlayer* _LocalPlayer, const FDataTableRowHandle& _DataTableRowHandle) {
    return FSlateBrush{};
}

FSlateBrush UGothicUIFunctionLibrary::GetCurrentEnhancedInputActionIcon(const ULocalPlayer* _LocalPlayer, const UInputAction* _InputAction) {
    return FSlateBrush{};
}

FText UGothicUIFunctionLibrary::GetChapterTitle(int32 _ChapterNumber) {
    return FText::GetEmpty();
}

FText UGothicUIFunctionLibrary::GetChapterHeadline(int32 _ChapterNumber) {
    return FText::GetEmpty();
}

void UGothicUIFunctionLibrary::GetAttributeDisplayText(const FGameplayAttribute& _GameplayAttribute, FText& _DisplayName, FText& _Description) {
}

void UGothicUIFunctionLibrary::GetArmorOreCost(const FGameplayTag& _ArmorTag, int32& _OreCost) {
}

FText UGothicUIFunctionLibrary::FormatNumberSI(int32 _Number) {
    return FText::GetEmpty();
}

bool UGothicUIFunctionLibrary::BrushIsEmpty(const FSlateBrush& _Brush) {
    return false;
}


