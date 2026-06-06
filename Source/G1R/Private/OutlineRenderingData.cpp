#include "OutlineRenderingData.h"

FOutlineRenderingData::FOutlineRenderingData() {
    this->RenderCustomDepth = false;
    this->CustomDepthStencil = 0;
    this->CustomStencilWriteMask = ERendererStencilMask::ERSM_Default;
}

