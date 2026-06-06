#include "GothicCrowdManagerStatics.h"

UGothicCrowdManagerStatics::UGothicCrowdManagerStatics() {
}

bool UGothicCrowdManagerStatics::IsPathBlockedByOtherLowerRankCharacter(const AGothicCharacter* SelfCharacter, AGothicCharacter*& OutBlockingCharacter, bool bRequireSelfMoving) {
    return false;
}

bool UGothicCrowdManagerStatics::IsPathBlockedByOther(const AGothicCharacter* SelfCharacter, AGothicAIController*& OutBlockingAiController, bool bRequireSelfMoving) {
    return false;
}

bool UGothicCrowdManagerStatics::IsPathBlockedByGivenLowerRankCharacter(const AGothicCharacter* SelfCharacter, const AGothicCharacter* OtherGothicCharacter, bool bRequireSelfMoving) {
    return false;
}

bool UGothicCrowdManagerStatics::IsPathBlockedByGivenCharacter(const AGothicCharacter* SelfCharacter, const AGothicCharacter* GivenGothicCharacter, bool bRequireSelfMoving) {
    return false;
}

bool UGothicCrowdManagerStatics::IsPathBlockedByAny(const AGothicCharacter* SelfCharacter, bool bRequireSelfMoving) {
    return false;
}

float UGothicCrowdManagerStatics::GetDistanceBetweenCrowdAgentCollisions(const AGothicCharacter* SelfCharacter, const AGothicCharacter* Other) {
    return 0.0f;
}

float UGothicCrowdManagerStatics::GetCrowdAgentRadius(const AGothicCharacter* SelfCharacter) {
    return 0.0f;
}

float UGothicCrowdManagerStatics::GetCrowdAgentHalfHeight(const AGothicCharacter* SelfCharacter) {
    return 0.0f;
}


