#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityInteractionBase.h"
#include "GameplayAbilityReadWriting.generated.h"

class UWritingDefinition;

UCLASS()
class G1R_API UGameplayAbilityReadWriting : public UGameplayAbilityInteractionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UWritingDefinition* m_WritingDefinition;
    
public:
    UGameplayAbilityReadWriting();

protected:
    UFUNCTION()
    void BookClosed();
    
};

