#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "EInventoryTypes.h"
#include "ItemVirtualData.h"
#include "ContainerVirtualData.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FContainerVirtualData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FItemVirtualData> m_Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EInventoryTypes m_InventoryType;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_ValidCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_Capacity;
    
    FContainerVirtualData();
};

