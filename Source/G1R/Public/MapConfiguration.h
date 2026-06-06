#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapConfiguration.generated.h"

UCLASS(BlueprintType)
class G1R_API UMapConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString MapPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName MapName;
    
    UMapConfiguration();

};

