#pragma once
#include "CoreMinimal.h"
#include "AreaSpellVFXParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FAreaSpellVFXParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpreadAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height_Emitter_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Width_Emitter_Size;
    
    FAreaSpellVFXParams();
};

