#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MiningSpotVisualComponent.generated.h"

class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UMiningSpotVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UStaticMeshComponent*> m_MeshesOre;
    
    UMiningSpotVisualComponent(const FObjectInitializer& ObjectInitializer);

};

