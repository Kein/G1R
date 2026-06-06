#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "WeaponSkillsConfig.generated.h"

UCLASS(Abstract, BlueprintType, MinimalAPI)
class UWeaponSkillsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FGameplayTag> m_WeaponSkillsMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FGameplayTag> m_WeaponSkillsTrained;
    
    UWeaponSkillsConfig();

};

