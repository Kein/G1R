#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptWorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "GenericData.h"
#include "ReplicatedInventoryMap.h"
#include "InteractiveSubsystem.generated.h"

UCLASS()
class G1R_API UInteractiveSubsystem : public UScriptWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FGuid, FGenericData> m_GenericData;
    
    UPROPERTY()
    TMap<FString, FReplicatedInventoryMap> m_SavedInventories;
    
public:
    UInteractiveSubsystem();

};

