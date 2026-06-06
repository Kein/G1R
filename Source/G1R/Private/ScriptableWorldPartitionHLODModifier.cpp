#include "ScriptableWorldPartitionHLODModifier.h"
#include "Templates/SubclassOf.h"

UScriptableWorldPartitionHLODModifier::UScriptableWorldPartitionHLODModifier() {
}

void UScriptableWorldPartitionHLODModifier::BP_EndHLODBuild_Implementation(TArray<UActorComponent*>& InOutComponents) {
}

bool UScriptableWorldPartitionHLODModifier::BP_CanModifyHLOD_Implementation(TSubclassOf<UHLODBuilder> InHLODBuilderClass) const {
    return false;
}

void UScriptableWorldPartitionHLODModifier::BP_BeginHLODBuild_Implementation(const FScriptableHLODBuildContext& InHLODBuildContext) {
}


