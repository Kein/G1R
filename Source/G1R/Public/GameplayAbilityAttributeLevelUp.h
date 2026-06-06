#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityAttributeLevelUp.generated.h"

UCLASS()
class G1R_API UGameplayAbilityAttributeLevelUp : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<FString, FGameplayAttribute> m_AttributePathToInstance;
    
public:
    UGameplayAbilityAttributeLevelUp();

};

