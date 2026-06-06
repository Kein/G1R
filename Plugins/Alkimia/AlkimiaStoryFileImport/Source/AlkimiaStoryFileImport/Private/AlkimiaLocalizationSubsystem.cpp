#include "AlkimiaLocalizationSubsystem.h"

UAlkimiaLocalizationSubsystem::UAlkimiaLocalizationSubsystem() {
    this->MountPoints.AddDefaulted(7);
    this->FacialAnimContentPath.AddDefaulted(6);
    this->LanguageSets.AddDefaulted(10);
    this->AlwaysPrependToLanguageSet.AddDefaulted(2);
    this->ActiveDisplayLanguageSet = TEXT("English");
    this->ActiveVoiceOverLanguageSet = TEXT("English");
    this->DefaultLanguageSet_Fallback = TEXT("English");
    this->TextIDSuffixPriority.AddDefaulted(1);
}

void UAlkimiaLocalizationSubsystem::WaitUntilPreloadAudioForTextIDCompleted(const FString& TextID) {
}

void UAlkimiaLocalizationSubsystem::SetDisplayLanguages(const TArray<FName>& languages) {
}

void UAlkimiaLocalizationSubsystem::SetAvailableLanguageSets(const TArray<FAlkimiaLanguageSet>& NewLanguageSets) {
}

void UAlkimiaLocalizationSubsystem::SetAddLanguageNameToTextsForTesting(bool bAddLanguageNameForDisplayLanguage) {
}

bool UAlkimiaLocalizationSubsystem::SetActiveVoiceOverLanguageSet(FName SetName) {
    return false;
}

bool UAlkimiaLocalizationSubsystem::SetActiveDisplayLanguageSet(FName SetName) {
    return false;
}

void UAlkimiaLocalizationSubsystem::RequestReloadLocalization() {
}

void UAlkimiaLocalizationSubsystem::RequestPreloadAudioForTextID(const UObject* Requester, const FString& Text) {
}

void UAlkimiaLocalizationSubsystem::RequestPreloadAudioForText(const UObject* Requester, FText Text) {
}

void UAlkimiaLocalizationSubsystem::ReloadLocalization() {
}

void UAlkimiaLocalizationSubsystem::ReleasePreloadedAudioForTextID(const UObject* Requester, const FString& Text) {
}

void UAlkimiaLocalizationSubsystem::ReleasePreloadedAudioForText(const UObject* Requester, FText Text) {
}

bool UAlkimiaLocalizationSubsystem::IsLoadInProgress() const {
    return false;
}

bool UAlkimiaLocalizationSubsystem::HasLocalizedTextForIdInLanguage(const FString& ID, FName Language) const {
    return false;
}

bool UAlkimiaLocalizationSubsystem::HasLocalizedTextForId(const FString& ID, FName Language) const {
    return false;
}

TArray<FName> UAlkimiaLocalizationSubsystem::GetVOLanguages() const {
    return TArray<FName>();
}

FText UAlkimiaLocalizationSubsystem::GetTextFromTag(const FGameplayTag& GameplayTag, const FString& Suffix) const {
    return FText::GetEmpty();
}

FString UAlkimiaLocalizationSubsystem::GetTextAsString(const FString& ID, FName Language) const {
    return TEXT("");
}

FText UAlkimiaLocalizationSubsystem::GetText(const FString& ID) const {
    return FText::GetEmpty();
}

TSet<FName> UAlkimiaLocalizationSubsystem::GetSupportedLanguages() const {
    return TSet<FName>();
}

TSoftObjectPtr<UAnimSequenceBase> UAlkimiaLocalizationSubsystem::GetFacialAnimationForText(const FText& Text) {
    return NULL;
}

TArray<FName> UAlkimiaLocalizationSubsystem::GetDisplayLanguages() const {
    return TArray<FName>();
}

TArray<FAlkimiaLanguageSet> UAlkimiaLocalizationSubsystem::GetAvailableLanguageSets() const {
    return TArray<FAlkimiaLanguageSet>();
}

FString UAlkimiaLocalizationSubsystem::GetAudioPathForTextIdInLanguage(const FString& ID, FName Language) const {
    return TEXT("");
}

FString UAlkimiaLocalizationSubsystem::GetAudioPathForTextId(const FString& ID) const {
    return TEXT("");
}

FString UAlkimiaLocalizationSubsystem::GetAudioPathForText(const FText& Text) {
    return TEXT("");
}

FAlkimiaLanguageSet UAlkimiaLocalizationSubsystem::GetActiveVoiceOverLanguageSet() const {
    return FAlkimiaLanguageSet{};
}

FAlkimiaLanguageSet UAlkimiaLocalizationSubsystem::GetActiveDisplayLanguageSet() const {
    return FAlkimiaLanguageSet{};
}

void UAlkimiaLocalizationSubsystem::EnsureTextDBFinishedLoading() {
}

FString UAlkimiaLocalizationSubsystem::BP_GetTextMetadataByName(const FText& Text, FName metadataName) const {
    return TEXT("");
}


