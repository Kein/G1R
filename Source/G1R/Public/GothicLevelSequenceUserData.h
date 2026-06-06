#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "GothicLevelSequenceUserData.generated.h"

class UAnimSequenceBase;
class UObject;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UGothicLevelSequenceUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FString> VoiceLinesIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UObject>> ObjectPtrs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<TSoftObjectPtr<UAnimSequenceBase>> FacialAssets;
    
    UGothicLevelSequenceUserData();

};

