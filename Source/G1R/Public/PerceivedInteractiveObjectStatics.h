#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "PerceivedInteractiveObject.h"
#include "PerceivedInteractiveObjectStatics.generated.h"

class AGothicCharacterState;
class UObject;

UCLASS(BlueprintType)
class UPerceivedInteractiveObjectStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerceivedInteractiveObjectStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPersonallyOwnedByAnyone(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPersonallyOwnedBy(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject, const AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsOwnedByCharactersGuild(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject, const AGothicCharacterState* CharacterState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<AGothicCharacterState*> GetPersonallyOwnedBy(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetOwnedByGuilds(const FPerceivedInteractiveObject& This, const UObject* WorldContextObject);
    
};

