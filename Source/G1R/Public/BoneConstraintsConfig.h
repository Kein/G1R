#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BonesConstraints.h"
#include "BoneConstraintsConfig.generated.h"

class USkeletalMesh;

UCLASS(Const)
class G1R_API UBoneConstraintsConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 m_SimulationLOD;
    
    UPROPERTY(EditAnywhere)
    TMap<TSoftObjectPtr<USkeletalMesh>, FBonesConstraints> m_BonesToSimulate;
    
public:
    UBoneConstraintsConfig();

};

