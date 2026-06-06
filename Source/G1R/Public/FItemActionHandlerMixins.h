#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ItemActionHandler.h"
#include "FItemActionHandlerMixins.generated.h"

class UActionKeywords;

UCLASS(BlueprintType)
class UFItemActionHandlerMixins : public UObject {
    GENERATED_BODY()
public:
    UFItemActionHandlerMixins();

    UFUNCTION(BlueprintCallable)
    static UActionKeywords* GetKeywordsObject(const FItemActionHandler& This);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer GetKeywords(const FItemActionHandler& This);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetActionTag(const FItemActionHandler& This);
    
};

