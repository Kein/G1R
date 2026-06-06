#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWeather.h"
#include "EnvironmentManagerCharacterStatics.generated.h"

class AGothicCharacter;

UCLASS(BlueprintType)
class G1R_API UEnvironmentManagerCharacterStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEnvironmentManagerCharacterStatics();

    UFUNCTION(BlueprintCallable)
    static bool IsUnderRoof(const AGothicCharacter* This);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInWeather(const AGothicCharacter* This, EWeather Weather);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInRain(const AGothicCharacter* This, int32 Level);
    
};

