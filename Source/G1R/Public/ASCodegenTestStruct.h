#pragma once
#include "CoreMinimal.h"
#include "EASCodegenTestEnum.h"
#include "ASCodegenTestStruct.generated.h"

USTRUCT()
struct FASCodegenTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    FString StringValue;
    
    UPROPERTY()
    FName NameValue;
    
    UPROPERTY()
    bool BoolValue;
    
    UPROPERTY()
    uint8 ByteValue;
    
    UPROPERTY()
    EASCodegenTestEnum EnumValue;
    
    G1R_API FASCodegenTestStruct();
};

