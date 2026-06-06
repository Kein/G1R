#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "TutorialIconHandlerSubsystem_Data.generated.h"

class UInputAction;
class UInputMappingContext;

USTRUCT(BlueprintType)
struct FTutorialIconHandlerSubsystem_Data {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UInputAction* InputAction;
    
    UPROPERTY(Transient)
    TArray<UInputMappingContext*> InputMappingContexts;
    
    UPROPERTY(Transient)
    FSlateBrush Brush;
    
    G1R_API FTutorialIconHandlerSubsystem_Data();
};

