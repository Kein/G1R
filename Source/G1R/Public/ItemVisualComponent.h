#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ItemVisualComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UItemVisualComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FComponentReference> m_MeshesLevels;
    
    UItemVisualComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void Server_SetNewVisualMeshLevel(int32 Level);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetNewVisualMeshLevel(int32 Level);
    
};

