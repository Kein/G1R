#include "GothicMassFragment_Significance.h"

FGothicMassFragment_Significance::FGothicMassFragment_Significance() {
    this->BaseSignificance = 0.00f;
    this->FinalSignificance = 0.00f;
    this->ForcedSignificance = 0.00f;
    this->bAllowedToBeVisible = false;
    this->LastTimeOverSpawningSignificanceThreshold = 0.00f;
}

