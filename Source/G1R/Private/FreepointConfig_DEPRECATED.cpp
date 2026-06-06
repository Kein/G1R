#include "FreepointConfig_DEPRECATED.h"

FFreepointConfig_DEPRECATED::FFreepointConfig_DEPRECATED() {
    this->FreepointType = EFreepointType::Normal;
    this->bCanChainAction = false;
    this->bAllowAnyOrientationWhenUsing = false;
    this->EntryDirection = EInteractionSpotEntryDirection::None;
    this->bUseActionTagsForInteractObject = false;
}

