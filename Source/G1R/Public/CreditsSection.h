#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CreditsSection.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class UCreditsSection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FString m_Text;
    
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* m_Image;
    
public:
    UCreditsSection();

};

