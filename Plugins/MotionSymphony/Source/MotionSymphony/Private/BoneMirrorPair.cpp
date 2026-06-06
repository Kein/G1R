#include "BoneMirrorPair.h"

FBoneMirrorPair::FBoneMirrorPair() {
    this->MirrorAxis = EAxis::None;
    this->FlipAxis = EAxis::None;
    this->bHasMirrorBone = false;
    this->bMirrorPosition = false;
}

