#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InteractiveObjectLibrary.generated.h"

class AActor;
class UObject;

UCLASS(BlueprintType)
class G1R_API UInteractiveObjectLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractiveObjectLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDoorOpen(const UObject* WorldContextObject, FName DoorName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool DoesDoorExist(const UObject* WorldContextObject, FName DoorName);
    
    UFUNCTION(BlueprintCallable)
    static bool CanDoorBeOpened(AActor* doorActor);
    
};

