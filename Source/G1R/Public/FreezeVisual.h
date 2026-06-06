#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FreezeVisual.generated.h"

class UGothicSkeletalMeshComponent;
class UProceduralMeshComponent;

UCLASS()
class G1R_API AFreezeVisual : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UProceduralMeshComponent* m_CustomMesh;
    
public:
    AFreezeVisual(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GenerateExtraGeometry(UGothicSkeletalMeshComponent* Mesh);
    
};

