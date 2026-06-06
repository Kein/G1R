#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PropSpawn_Data.generated.h"

UCLASS()
class G1R_API UPropSpawn_Data : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_PropName;
    
    UPropSpawn_Data();

};

