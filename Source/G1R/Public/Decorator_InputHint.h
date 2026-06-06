#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "Decorator_InputHint.generated.h"

class UDataTable;

UCLASS()
class G1R_API UDecorator_InputHint : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UDataTable* InputNameMappings;
    
    UDecorator_InputHint();

};

