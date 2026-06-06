#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/HLOD/HLODModifier.h"
#include "ScriptableHLODBuildContext.h"
#include "Templates/SubclassOf.h"
#include "ScriptableWorldPartitionHLODModifier.generated.h"

class UActorComponent;
class UHLODBuilder;

UCLASS(Abstract, Blueprintable)
class G1R_API UScriptableWorldPartitionHLODModifier : public UWorldPartitionHLODModifier {
    GENERATED_BODY()
public:
    UScriptableWorldPartitionHLODModifier();

    UFUNCTION(BlueprintNativeEvent)
    void BP_EndHLODBuild(TArray<UActorComponent*>& InOutComponents);
    
    UFUNCTION(BlueprintNativeEvent)
    bool BP_CanModifyHLOD(TSubclassOf<UHLODBuilder> InHLODBuilderClass) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void BP_BeginHLODBuild(const FScriptableHLODBuildContext& InHLODBuildContext);
    
};

