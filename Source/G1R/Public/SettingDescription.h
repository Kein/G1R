#pragma once
#include "CoreMinimal.h"
#include "SettingDescription.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSettingDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> m_Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText m_Text;
    
    G1R_API FSettingDescription();
};

