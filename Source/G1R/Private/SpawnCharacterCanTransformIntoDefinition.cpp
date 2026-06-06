#include "SpawnCharacterCanTransformIntoDefinition.h"
#include "Templates/SubclassOf.h"

USpawnCharacterCanTransformIntoDefinition::USpawnCharacterCanTransformIntoDefinition() {
    this->m_Config = NULL;
    this->m_WaitingTimeCrouchUntilTransform = 1.50f;
    this->m_CameraTravellingInitialDelay = 0.00f;
    this->m_CameraTravellingDuration = 1.50f;
    this->m_WaitingTimeCrouchUntilUnTransform = 1.50f;
    this->m_ShouldStartFlying = false;
    this->m_CanSwim = false;
}

TSubclassOf<ACharacterCanTransformInto> USpawnCharacterCanTransformIntoDefinition::GetCharacterClass() const {
    return NULL;
}


