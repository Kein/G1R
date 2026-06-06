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
    UPROPERTY(EditAnywhere)
    TSubclassOf<UItemDefinition> m_Definition;
    
    UPROPERTY(EditAnywhere)
    int32 m_Num;
    
    UPROPERTY(EditAnywhere)
    FVector m_Origin;
    
    UPROPERTY(EditAnywhere)
    FQuat m_Rot;
    
    UPROPERTY(EditAnywhere)
    FItemPayload m_Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FReplicatedStringMap m_GenericData;
    
    UPROPERTY(EditAnywhere)
    bool m_IsDynamic;
    
    UPROPERTY(EditAnywhere)
    bool m_Switch;
    
    FDroppedItem();
};

