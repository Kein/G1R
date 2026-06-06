#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnPosition.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FItemSpawnPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform m_Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString m_Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_SocketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform m_SocketTransform;
    
    FItemSpawnPosition();
};

