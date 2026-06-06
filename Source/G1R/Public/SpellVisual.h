#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GothicGASActor.h"
#include "Templates/SubclassOf.h"
#include "SpellVisual.generated.h"

class AActor;

UCLASS()
class G1R_API ASpellVisual : public AGothicGASActor {
    GENERATED_BODY()
public:
    ASpellVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SpawnObject(TSubclassOf<AActor> Actor, FVector position, FRotator Rotation);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSpellEndPlay();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSpellDisplayDebugImGui() const;
    
};

