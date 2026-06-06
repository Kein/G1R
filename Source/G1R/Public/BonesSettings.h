#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BoneNames.h"
#include "BonesSettings.generated.h"

USTRUCT(BlueprintType)
struct FBonesSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBoneNames m_BoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpinePelvisBoneAmount;
    
    G1R_API FBonesSettings();
};

