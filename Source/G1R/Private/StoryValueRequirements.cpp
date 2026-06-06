#include "StoryValueRequirements.h"

FStoryValueRequirements::FStoryValueRequirements() {
    this->StoryClass = NULL;
    this->ComparisonOp = EInteractionSpotComparisonOp::LessThan;
    this->CompareAgainst = 0.00f;
}

