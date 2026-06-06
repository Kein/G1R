#include "SpellExecutionValidator.h"
#include "Templates/SubclassOf.h"

USpellExecutionValidator::USpellExecutionValidator() {
    this->m_ExecutionValidatorData = NULL;
}

bool USpellExecutionValidator::IsValid_Scriptable_Implementation(USpellExecutionValidatorData* ExecutionValidatorData) const {
    return false;
}

bool USpellExecutionValidator::IsValid(USpellExecutionValidatorData* ExecutionValidatorData) const {
    return false;
}

TSubclassOf<USpellExecutionValidatorData> USpellExecutionValidator::GetExecutionValidatorDataClass() {
    return NULL;
}


