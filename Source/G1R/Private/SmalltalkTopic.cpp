#include "SmalltalkTopic.h"

USmalltalkTopic::USmalltalkTopic() {
    this->Weight = 1.00f;
}

bool USmalltalkTopic::IsTransitionAllowed_Implementation(const FGameplayTag& LastSpokenVoicelineTag, const AGothicCharacterState* Me, const AGothicCharacterState* Other) const {
    return false;
}


