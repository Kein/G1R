#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AlkimiaSteamUtils.generated.h"

UCLASS(DefaultConfig, Config=AlkimiaSteamExtensions)
class ALKIMIASTEAMEXTENSIONS_API UAlkimiaSteamUtils : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditDefaultsOnly)
    TMap<FString, FString> LanguageMap;
    
    UAlkimiaSteamUtils();

};

