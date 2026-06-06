#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "FaceBlendshapeUserData.generated.h"

class UAnimSequence;
class UFaceBlendshapeUserData;
class UObject;

UCLASS(BlueprintType, EditInlineNew)
class G1R_API UFaceBlendshapeUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* FaceBlendshapeAnimation;
    
    UFaceBlendshapeUserData();

    UFUNCTION(BlueprintCallable)
    static UFaceBlendshapeUserData* GetMyAssetNameUserData(UObject* Object);
    
};

