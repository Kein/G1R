#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EWalkSpeed.h"
#include "WalkSpeedModifier.h"
#include "WalkSpeedModifierComponent.generated.h"

class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UWalkSpeedModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UObject*, FWalkSpeedModifier> SpeedModifiers;
    
    UPROPERTY()
    UObject* m_SelectedClass;
    
    UPROPERTY()
    EWalkSpeed m_SelectedWalkSpeed;
    
public:
    UWalkSpeedModifierComponent(const FObjectInitializer& ObjectInitializer);

};

