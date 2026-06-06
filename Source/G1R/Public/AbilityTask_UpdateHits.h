#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "AbilityTaskBase.h"
#include "UpdateHitsDataContainer.h"
#include "AbilityTask_UpdateHits.generated.h"

class AActor;

UCLASS()
class G1R_API UAbilityTask_UpdateHits : public UAbilityTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<AActor*> m_OverlapActors;
    
    UPROPERTY()
    TArray<FHitResult> m_OutOverlapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<AActor*, FUpdateHitsDataContainer> m_OverlappingActorHitMap;
    
protected:
    UPROPERTY()
    bool m_UseComponentRotation;
    
public:
    UAbilityTask_UpdateHits();

};

