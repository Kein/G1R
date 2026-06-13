#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemPayload.h"
#include "ReplicatedStringMap.h"
#include "Templates/SubclassOf.h"
#include "DroppedItem.generated.h"

class UItemDefinition;

USTRUCT(BlueprintType)
struct G1R_API FDroppedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat m_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemPayload m_Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FReplicatedStringMap m_GenericData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Switch;
    
    FDroppedItem();
};

