#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityPossess.generated.h"

class UGameplayEffect;

UCLASS()
class G1R_API UGameplayAbilityPossess : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TSubclassOf<UGameplayEffect> m_PossessEffect;
    
public:
    UGameplayAbilityPossess();

};

