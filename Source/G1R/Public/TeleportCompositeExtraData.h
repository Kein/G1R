#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TeleportCompositeExtraData.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UTeleportCompositeExtraData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UClass*> m_Teleports;
    
    UTeleportCompositeExtraData();

};

