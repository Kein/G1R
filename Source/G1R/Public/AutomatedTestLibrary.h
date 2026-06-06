#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Layout/Geometry.h"
#include "EAxisInputID.h"
#include "EButtonInputID.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "AutomatedTestLibrary.generated.h"

class ACharacter;
class UItemDefinition;
class UObject;

UCLASS(BlueprintType)
class G1R_API UAutomatedTestLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAutomatedTestLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetCharacterQuickItem(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition, int32 QuickSlot);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReleasePlayerKeyInput(FKey Key, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReleasePlayerButtonInput(EButtonInputID ButtonInputs, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReleasePlayerAxisInput(EAxisInputID AxisInputs, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PointPlayerCameraAtLocation(const UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintPure)
    static FVector2D GetLocalCenter(const FGeometry& Geometry);
    
    UFUNCTION(BlueprintPure)
    static UObject* GetDefaultObject(UClass* ObjectClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<FKey> GetAllInputKeys();
    
    UFUNCTION(BlueprintCallable)
    static void CharacterTakeOutItemOfKind(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyPlayerKeyInput(FKey Key, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyPlayerButtonInput(EButtonInputID ButtonInputs, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ApplyPlayerAxisInput(EAxisInputID AxisInputs, float AxisValue, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddItemToCharacterInventory(ACharacter* Character, const TSubclassOf<UItemDefinition> ItemDefinition, EInventoryTypes InventoryType);
    
};

