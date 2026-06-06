#include "GateShadowAnimNode.h"

FGateShadowAnimNode::FGateShadowAnimNode() {
    this->bDebug = false;
    this->Data = NULL;
    this->ReloadData = false;
    this->CurveValueFilter_LOD0 = 0.00f;
    this->CurveValueFilter_LOD1 = 0.00f;
    this->CurveValueFilter_LOD2 = 0.00f;
    this->CurveValueFilter_LOD3 = 0.00f;
    this->CurveValueFilter_LOD4 = 0.00f;
    this->CurveValueFilter_LOD5 = 0.00f;
    this->CurveValueFilter_LOD6 = 0.00f;
    this->bDisabledByLOD_LOD0 = false;
    this->bDisabledByLOD_LOD1 = false;
    this->bDisabledByLOD_LOD2 = false;
    this->bDisabledByLOD_LOD3 = false;
    this->bDisabledByLOD_LOD4 = false;
    this->bDisabledByLOD_LOD5 = false;
    this->bDisabledByLOD_LOD6 = false;
}

