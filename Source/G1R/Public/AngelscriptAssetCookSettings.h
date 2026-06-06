#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AngelscriptAssetCookSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class G1R_API UAngelscriptAssetCookSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> ExtractSoftPtrAssetsOfClassesInPackage;
    
    UAngelscriptAssetCookSettings();

};

