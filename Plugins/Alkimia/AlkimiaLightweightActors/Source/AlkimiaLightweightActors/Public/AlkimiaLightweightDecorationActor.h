#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AlkimiaLightweightDecorationActor.generated.h"

class UAlkimiaLightweightDecorationComponent;

UCLASS()
class ALKIMIALIGHTWEIGHTACTORS_API AAlkimiaLightweightDecorationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UAlkimiaLightweightDecorationComponent* LightweightDecorationComponent;
    
    AAlkimiaLightweightDecorationActor(const FObjectInitializer& ObjectInitializer);

};

