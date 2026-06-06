#pragma once
#include "CoreMinimal.h"
#include "ItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "SpellContainer.generated.h"

class USpellConfig;
class USpellConfigurationContainer;

UCLASS(Abstract, EditInlineNew)
class G1R_API USpellContainer : public UItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USpellConfig> m_SpellConfig;
    
    USpellContainer();

    UFUNCTION(BlueprintPure)
    USpellConfigurationContainer* GetSpellConfigurationContainer() const;
    
    UFUNCTION(BlueprintPure)
    USpellConfig* GetSpellConfigFromContainer() const;
    
};

