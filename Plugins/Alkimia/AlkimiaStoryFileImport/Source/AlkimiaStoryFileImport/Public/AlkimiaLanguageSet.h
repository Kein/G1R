#pragma once
#include "CoreMinimal.h"
#include "AlkimiaLanguageSet.generated.h"

USTRUCT(BlueprintType)
struct FAlkimiaLanguageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName SetName;
    
    UPROPERTY(BlueprintReadOnly)
    FString DisplayText;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FName> LanguagePriority;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasVoiceOver;
    
    UPROPERTY(BlueprintReadOnly)
    int32 BinkAudioTrack;
    
    ALKIMIASTORYFILEIMPORT_API FAlkimiaLanguageSet();
};

