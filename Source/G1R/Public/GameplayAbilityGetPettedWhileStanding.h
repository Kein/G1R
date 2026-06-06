#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityGetPettedWhileStanding.generated.h"

class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityGetPettedWhileStanding : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontageHeroStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontageHeroCrouching;
    
public:
    UGameplayAbilityGetPettedWhileStanding();

};

