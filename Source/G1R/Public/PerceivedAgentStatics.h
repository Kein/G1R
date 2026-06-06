#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PerceivedAgent.h"
#include "PerceivedAgentStatics.generated.h"

class AActor;
class AGothicCharacter;
class AGothicCharacterState;
class UObject;

UCLASS(BlueprintType)
class UPerceivedAgentStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerceivedAgentStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCharacterState(FPerceivedAgent& This, AGothicCharacterState* CharacterState, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCharacter(FPerceivedAgent& This, AGothicCharacter* Character, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacterState* GetCharacterState(const FPerceivedAgent& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGothicCharacter* GetCharacter(const FPerceivedAgent& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* GetActor(const FPerceivedAgent& This, const UObject* WorldContextObject);
    
};

