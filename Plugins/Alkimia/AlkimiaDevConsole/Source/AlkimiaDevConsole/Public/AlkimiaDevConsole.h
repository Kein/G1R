#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "AlkimiaDevConsole.generated.h"

UCLASS(NonTransient, Config=Engine)
class UAlkimiaDevConsole : public UConsole {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    bool bBlockCircumflex;
    
    UAlkimiaDevConsole();

};

