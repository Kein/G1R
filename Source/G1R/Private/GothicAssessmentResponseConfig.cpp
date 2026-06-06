#include "GothicAssessmentResponseConfig.h"

UGothicAssessmentResponseConfig::UGothicAssessmentResponseConfig() {
    this->ConditionBits.AddDefaulted(99);
}

FName UGothicAssessmentResponseConfig::GetConditionBitName(int32 BitIndex) const {
    return NAME_None;
}


