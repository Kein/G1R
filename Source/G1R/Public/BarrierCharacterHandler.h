#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EDangerLevel.h"
#include "BarrierCharacterHandler.generated.h"

class AGothicCharacter;
class UBarrierCharacterState;

UCLASS()
class UBarrierCharacterHandler : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AGothicCharacter> Character;
    
    UPROPERTY(EditAnywhere)
    EDangerLevel DangerLevel;
    
    UPROPERTY(EditAnywhere)
    TMap<EDangerLevel, UBarrierCharacterState*> States;
    
public:
    UBarrierCharacterHandler();

};

