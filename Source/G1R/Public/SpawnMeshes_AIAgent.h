#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SpawnMeshes_AIAgent.generated.h"

class USkeletalMesh;

UCLASS(BlueprintType)
class G1R_API USpawnMeshes_AIAgent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_AgentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<USkeletalMesh>> m_meshes;
    
public:
    USpawnMeshes_AIAgent();

};

