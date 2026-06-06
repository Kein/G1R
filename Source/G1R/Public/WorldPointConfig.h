#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemSpawnConfig.h"
#include "ItemSpawnPosition.h"
#include "Templates/SubclassOf.h"
#include "WorldPointConfig.generated.h"

class UObject;
class UWorldPointScript;

USTRUCT(BlueprintType)
struct FWorldPointConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Name;
    
    UPROPERTY(EditAnywhere)
    FName m_Scene;
    
    UPROPERTY(EditAnywhere)
    FTransform m_Transform;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UWorldPointScript> m_WorldPointScript;
    
    UPROPERTY(EditAnywhere)
    UWorldPointScript* m_WorldPointScriptInstance;
    
    UPROPERTY(EditAnywhere)
    FString m_WorldPointScriptName;
    
    UPROPERTY(EditAnywhere)
    FItemSpawnConfig m_ItemSpawnConfig;
    
    UPROPERTY(EditAnywhere)
    TArray<FItemSpawnPosition> m_ItemSpawnPositions;
    
    UPROPERTY(EditAnywhere)
    bool m_IsActive;
    
    UPROPERTY(EditAnywhere)
    UObject* m_OptionalObject;
    
    UPROPERTY(EditAnywhere)
    float m_Radius;
    
    UPROPERTY(EditAnywhere)
    FTransform m_ActorTransform;
    
    G1R_API FWorldPointConfig();
};

