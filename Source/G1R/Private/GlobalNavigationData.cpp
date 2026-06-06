#include "GlobalNavigationData.h"

AGlobalNavigationData::AGlobalNavigationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
    this->bAddConnectiveObjects = true;
    this->bRemoveExtremEdges = true;
    this->ExtremEdgeDistanceThresholdFactor = 2.00f;
    this->bRemoveLongEdges = true;
    this->LongEdgeDistanceThresholdFactor = 1.50f;
    this->EdgeLongestAllowedDistance = 5000.00f;
    this->bUseConnectOnSameStoreyLevel = true;
    this->ConnectNodeOnStoreyRadius = 3000.00f;
    this->ConnectNodeOnStoreyHalfHeight = 250.00f;
    this->bReconnectIslands = true;
    this->WaynetEgdeCount = 0;
    this->WaynetNodeCount = 0;
    this->bIsEditorCameraNavigationInvoker = false;
    this->SearchRadius = 3000.00f;
    this->AStarHeuristicScale = 0.80f;
    this->MetaRepathingRadiusFallback = 1000.00f;
    this->MetaDiversionPointRadius = 5.00f;
    this->bLoadWorldPartitionBeforeBuild = true;
    this->bMapCheckWaynetIslands = true;
    this->bDrawAbstractWaynet = false;
    this->Height_AbstractWaynet = 50.00f;
    this->Thickness_AbstractWaynet = 0.00f;
    this->bDrawPathWaynet = false;
    this->Height_PathWaynet = 25.00f;
    this->Thickness_PathWaynet = 0.00f;
    this->bVisualizeIssues = false;
    this->Height_Issues = 400.00f;
}


