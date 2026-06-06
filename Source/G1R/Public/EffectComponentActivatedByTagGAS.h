#pragma once
#include "CoreMinimal.h"
#include "EffectComponentActivatedByTag.h"
#include "EffectComponentActivatedByTagGAS.generated.h"

class UEffectComponentBase;
class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UEffectComponentActivatedByTagGAS : public UEffectComponentActivatedByTag {
    GENERATED_BODY()
public:
    UEffectComponentActivatedByTagGAS(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UEffectComponentBase* SpawnEffectStateComponent_Scriptable(UObject* OuterActor, UClass* VisualActorClass) const;
    
};

