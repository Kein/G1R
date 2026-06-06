#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/SoftObjectPath.h"
#include "AlkimiaStoryAssets.generated.h"

UCLASS(BlueprintType)
class ALKIMIASTORYFILEIMPORT_API UAlkimiaStoryAssets : public UObject {
    GENERATED_BODY()
public:
    UAlkimiaStoryAssets();

    UFUNCTION(BlueprintCallable)
    static bool PrepareStoryAssetForLoad(const FSoftObjectPath& StoryAssetSoftPath);
    
    UFUNCTION(BlueprintCallable)
    static bool IsStoryAssetLoaded(const FSoftObjectPath& StoryAssetSoftPath);
    
};

