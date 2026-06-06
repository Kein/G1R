#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDirtAmountType.h"
#include "DirtVisualSettings.generated.h"

USTRUCT(BlueprintType)
struct FDirtVisualSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDirtAmountType DirtAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasDirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DirtColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DirtColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtAlbedoIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtAmountIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtAmount0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirtHit0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtRadius0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtAmount1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirtHit1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtRadius1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtAmount2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DirtHit2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DirtRadius2;
    
    G1R_API FDirtVisualSettings();
};

