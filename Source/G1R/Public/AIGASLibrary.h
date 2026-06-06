#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AIGASLibrary.generated.h"

class AActor;
class UAttributeSetBase;

UCLASS(BlueprintType)
class UAIGASLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAIGASLibrary();

    UFUNCTION(BlueprintCallable)
    static bool HasTags(AActor* Entity, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetHitType(AActor* Entity);
    
    UFUNCTION(BlueprintCallable)
    static float GetAttributeValue(AActor* Entity, TSubclassOf<UAttributeSetBase> attributSetClass, FName attributName);
    
};

