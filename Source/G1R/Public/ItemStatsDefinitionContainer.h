#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemStatsDefinitionContainer.generated.h"

class IStat;
class UStat;
class UStatValue;

UCLASS(BlueprintType)
class G1R_API UItemStatsDefinitionContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FName, TScriptInterface<IStat>> m_ItemStatsDefinition;
    
public:
    UItemStatsDefinitionContainer();

    UFUNCTION(BlueprintPure)
    UStatValue* Find_Scriptable(const FName& StatName) const;
    
};

