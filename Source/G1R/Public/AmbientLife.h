#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "AmbientLife.generated.h"

class AAmbientLifeWarningFlock;
class UAmbientLifeConfig;

UCLASS(Transient)
class G1R_API UAmbientLife : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    AAmbientLifeWarningFlock* m_AmbientLifeActor;
    
    UPROPERTY()
    TSubclassOf<UAmbientLifeConfig> m_CreatureDefinition;
    
    UPROPERTY()
    int32 m_Num;
    
    UAmbientLife();

};

