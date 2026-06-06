#pragma once
#include "CoreMinimal.h"
#include "InnerItems.h"
#include "OwnershipSettings.h"
#include "ReplicatedStringMap.h"
#include "ItemPayload.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FItemPayload {
    GENERATED_BODY()
public:
    UPROPERTY()
    FReplicatedStringMap m_GenericData;
    
    UPROPERTY()
    int32 m_StageLevel;
    
    UPROPERTY(EditDefaultsOnly)
    UClass* m_OptionalObject;
    
    UPROPERTY()
    FInnerItems m_InnerItems;
    
    UPROPERTY()
    FOwnershipSettings m_Ownership;
    
    FItemPayload();
};

