#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "Templates/SubclassOf.h"
#include "TeleportGameplayCue.generated.h"

class ATeleportVanishingActor;

UCLASS()
class G1R_API ATeleportGameplayCue : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<ATeleportVanishingActor> m_TeleportVFXClass;
    
private:
    UPROPERTY()
    ATeleportVanishingActor* m_VFXActor;
    
public:
    ATeleportGameplayCue(const FObjectInitializer& ObjectInitializer);

};

