#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "DocumentElement.generated.h"

UCLASS(Abstract)
class G1R_API UDocumentElement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag Style;
    
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FString> ExtraStyleParameters;
    
    UDocumentElement();

};

