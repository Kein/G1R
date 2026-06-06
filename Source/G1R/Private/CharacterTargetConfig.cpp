#include "CharacterTargetConfig.h"
#include "GameFramework/Character.h"

UCharacterTargetConfig::UCharacterTargetConfig() {
    this->m_TargetFilterClass = ACharacter::StaticClass();
}


