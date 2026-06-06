#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BoneMirrorPair.h"
#include "MirroringProfile.generated.h"

class USkeleton;

UCLASS(BlueprintType)
class MOTIONSYMPHONY_API UMirroringProfile : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USkeleton* SourceSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CharacterMirrorAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMirrorPosition_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString LeftAffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString RightAffix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBoneMirrorPair> MirrorPairs;
    
    UMirroringProfile();

};

