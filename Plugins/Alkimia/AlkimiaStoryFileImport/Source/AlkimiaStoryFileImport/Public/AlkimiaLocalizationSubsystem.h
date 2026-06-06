#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/EngineSubsystem.h"
#include "GameplayTagContainer.h"
#include "AlkimiaLanguageSet.h"
#include "AlkimiaStoryMountPoint.h"
#include "AlkimiaLocalizationSubsystem.generated.h"

class UAnimSequenceBase;
class UObject;

UCLASS(BlueprintType, Config=Game)
class ALKIMIASTORYFILEIMPORT_API UAlkimiaLocalizationSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<FAlkimiaStoryMountPoint> MountPoints;
    
    UPROPERTY(Config)
    TArray<FString> FacialAnimContentPath;
    
    UPROPERTY(Config)
    FSoftObjectPath FallbackFacialAnimation;
    
    UPROPERTY(Config)
    TArray<FAlkimiaLanguageSet> LanguageSets;
    
    UPROPERTY(Config)
    TArray<FName> AlwaysPrependToLanguageSet;
    
    UPROPERTY(Config)
    FName ActiveDisplayLanguageSet;
    
    UPROPERTY(Config)
    FName ActiveVoiceOverLanguageSet;
    
    UPROPERTY(Config)
    FName ForcedDisplayLanguageSet;
    
    UPROPERTY(Config)
    FName ForcedVoiceOverLanguageSet;
    
    UPROPERTY(Config)
    FName DefaultLanguageSet;
    
    UPROPERTY(Config)
    FName DefaultLanguageSet_Fallback;
    
    UPROPERTY(Config)
    TMap<FName, FName> CultureToLanguageSetMapping;
    
    UPROPERTY(Config)
    TArray<FString> TextIDSuffixPriority;
    
public:
    UAlkimiaLocalizationSubsystem();

    UFUNCTION(BlueprintCallable)
    void WaitUntilPreloadAudioForTextIDCompleted(const FString& TextID);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayLanguages(const TArray<FName>& languages);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailableLanguageSets(const TArray<FAlkimiaLanguageSet>& NewLanguageSets);
    
    UFUNCTION(BlueprintCallable)
    void SetAddLanguageNameToTextsForTesting(bool bAddLanguageNameForDisplayLanguage);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveVoiceOverLanguageSet(FName SetName);
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveDisplayLanguageSet(FName SetName);
    
    UFUNCTION(BlueprintCallable)
    void RequestReloadLocalization();
    
    UFUNCTION(BlueprintCallable)
    void RequestPreloadAudioForTextID(const UObject* Requester, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void RequestPreloadAudioForText(const UObject* Requester, FText Text);
    
    UFUNCTION(BlueprintCallable)
    void ReloadLocalization();
    
    UFUNCTION(BlueprintCallable)
    void ReleasePreloadedAudioForTextID(const UObject* Requester, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePreloadedAudioForText(const UObject* Requester, FText Text);
    
    UFUNCTION(BlueprintPure)
    bool IsLoadInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool HasLocalizedTextForIdInLanguage(const FString& ID, FName Language) const;
    
    UFUNCTION(BlueprintPure)
    bool HasLocalizedTextForId(const FString& ID, FName Language) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetVOLanguages() const;
    
    UFUNCTION(BlueprintPure)
    FText GetTextFromTag(const FGameplayTag& GameplayTag, const FString& Suffix) const;
    
    UFUNCTION(BlueprintPure)
    FString GetTextAsString(const FString& ID, FName Language) const;
    
    UFUNCTION(BlueprintPure)
    FText GetText(const FString& ID) const;
    
    UFUNCTION(BlueprintPure)
    TSet<FName> GetSupportedLanguages() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UAnimSequenceBase> GetFacialAnimationForText(const FText& Text);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetDisplayLanguages() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FAlkimiaLanguageSet> GetAvailableLanguageSets() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAudioPathForTextIdInLanguage(const FString& ID, FName Language) const;
    
    UFUNCTION(BlueprintPure)
    FString GetAudioPathForTextId(const FString& ID) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetAudioPathForText(const FText& Text);
    
    UFUNCTION(BlueprintPure)
    FAlkimiaLanguageSet GetActiveVoiceOverLanguageSet() const;
    
    UFUNCTION(BlueprintPure)
    FAlkimiaLanguageSet GetActiveDisplayLanguageSet() const;
    
    UFUNCTION(BlueprintCallable)
    void EnsureTextDBFinishedLoading();
    
    UFUNCTION(BlueprintPure)
    FString BP_GetTextMetadataByName(const FText& Text, FName metadataName) const;
    
};

