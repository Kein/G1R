#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponItemAnimConfig.h"
#include "WeaponMeleeItemAnimConfig.generated.h"

class UParriesData;

UCLASS(Abstract, EditInlineNew)
class G1R_API UWeaponMeleeItemAnimConfig : public UWeaponItemAnimConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UParriesData> m_ParriesData;
    
public:
    UWeaponMeleeItemAnimConfig();

};

