#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "SpellExecutionValidator.generated.h"

class USpellExecutionValidatorData;

UCLASS(Blueprintable)
class G1R_API USpellExecutionValidator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpellExecutionValidatorData> m_ExecutionValidatorData;
    
public:
    USpellExecutionValidator();

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsValid_Scriptable(USpellExecutionValidatorData* ExecutionValidatorData) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValid(USpellExecutionValidatorData* ExecutionValidatorData) const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<USpellExecutionValidatorData> GetExecutionValidatorDataClass();
    
};

