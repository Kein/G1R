#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BoneMirrorPair.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FBoneMirrorPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MirrorBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis::Type> MirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EAxis::Type> FlipAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasMirrorBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMirrorPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator RotationOffset;
    
    FBoneMirrorPair();
};

