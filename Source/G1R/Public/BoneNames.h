#pragma once
#include "CoreMinimal.h"
#include "BoneNames.generated.h"

USTRUCT(BlueprintType)
struct FBoneNames {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FName Root;
    
    UPROPERTY(EditAnywhere)
    FName Head;
    
    UPROPERTY(EditAnywhere)
    FName Pelvis;
    
    UPROPERTY(EditAnywhere)
    FName Chest;
    
    UPROPERTY(EditAnywhere)
    FName FootL;
    
    UPROPERTY(EditAnywhere)
    FName FootR;
    
    UPROPERTY(EditAnywhere)
    FName HandL;
    
    UPROPERTY(EditAnywhere)
    FName HandR;
    
    G1R_API FBoneNames();
};

