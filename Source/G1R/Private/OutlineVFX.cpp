#include "OutlineVFX.h"

FOutlineVFX::FOutlineVFX() {
    this->FadeTime = 0.00f;
    this->StencilValue = 0;
    this->IsAppearing = false;
    this->NeedsUpdate = false;
    this->StencilUsage = EStencilsUsage::None;
}

