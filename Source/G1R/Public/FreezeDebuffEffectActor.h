#pragma once
#include "CoreMinimal.h"
#include "DebuffEffectActorByTag.h"
#include "FreezeDebuffEffectActor.generated.h"

class UGothicSkeletalMeshComponent;
class UProceduralMeshComponent;

UCLASS()
class G1R_API AFreezeDebuffEffectActor : public ADebuffEffectActorByTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UProceduralMeshComponent* m_CustomMesh;
    
public:
    AFreezeDebuffEffectActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void GenerateExtraGeometry(UGothicSkeletalMeshComponent* Mesh);
    
};

