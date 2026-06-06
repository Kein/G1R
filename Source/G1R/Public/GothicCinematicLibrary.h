#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EInventoryTypes.h"
#include "GothicCinematicLibrary.generated.h"

class ACharacter;
class ULevelSequence;

UCLASS(BlueprintType)
class G1R_API UGothicCinematicLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGothicCinematicLibrary();

    UFUNCTION(BlueprintCallable)
    static void SayVoiceline(ACharacter* Character, FText Text, FText CustomName);
    
    UFUNCTION(BlueprintCallable)
    static void HideItem(ACharacter* Character, bool Hide, EInventoryTypes InventoryType);
    
    UFUNCTION(BlueprintPure)
    static TArray<FName> GetActorTaggedBindings(ULevelSequence* LevelSequenceAsset);
    
    UFUNCTION(BlueprintCallable)
    static void ForceLOD(ACharacter* Character, float LODIndex);
    
};

