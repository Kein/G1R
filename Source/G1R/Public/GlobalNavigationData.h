#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavMesh/RecastNavMesh.h"
#include "Waynet.h"
#include "GlobalNavigationData.generated.h"

class UNavigationAreaFilter;

UCLASS(Config=Engine)
class G1R_API AGlobalNavigationData : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bAddConnectiveObjects;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveExtremEdges;
    
    UPROPERTY(EditAnywhere)
    float ExtremEdgeDistanceThresholdFactor;
    
    UPROPERTY(EditAnywhere)
    bool bRemoveLongEdges;
    
    UPROPERTY(EditAnywhere)
    float LongEdgeDistanceThresholdFactor;
    
    UPROPERTY(EditAnywhere)
    float EdgeLongestAllowedDistance;
    
    UPROPERTY(EditAnywhere)
    bool bUseConnectOnSameStoreyLevel;
    
    UPROPERTY(EditAnywhere)
    float ConnectNodeOnStoreyRadius;
    
    UPROPERTY(EditAnywhere)
    float ConnectNodeOnStoreyHalfHeight;
    
    UPROPERTY(EditAnywhere)
    bool bReconnectIslands;
    
    UPROPERTY(VisibleAnywhere)
    int32 WaynetEgdeCount;
    
    UPROPERTY(VisibleAnywhere)
    int32 WaynetNodeCount;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UNavigationAreaFilter> WaynetAreaFilterClass;
    
protected:
    UPROPERTY()
    FWaynet Waynet;
    
    UPROPERTY(EditAnywhere)
    bool bIsEditorCameraNavigationInvoker;
    
    UPROPERTY(EditAnywhere)
    FVector2f CameraInvokerRadiusRange;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    float AStarHeuristicScale;
    
    UPROPERTY(EditAnywhere)
    float MetaRepathingRadiusFallback;
    
    UPROPERTY(EditAnywhere)
    float MetaDiversionPointRadius;
    
    UPROPERTY(EditAnywhere)
    FVector WaynetQueryExtent;
    
    UPROPERTY(EditAnywhere)
    bool bLoadWorldPartitionBeforeBuild;
    
    UPROPERTY(EditAnywhere)
    bool bMapCheckWaynetIslands;
    
    UPROPERTY(EditAnywhere)
    bool bDrawAbstractWaynet;
    
    UPROPERTY(EditAnywhere)
    double Height_AbstractWaynet;
    
    UPROPERTY(EditAnywhere)
    double Thickness_AbstractWaynet;
    
    UPROPERTY(EditAnywhere)
    FColor Color_AbstractWaynet;
    
    UPROPERTY(EditAnywhere)
    bool bDrawPathWaynet;
    
    UPROPERTY(EditAnywhere)
    double Height_PathWaynet;
    
    UPROPERTY(EditAnywhere)
    double Thickness_PathWaynet;
    
    UPROPERTY(EditAnywhere)
    FColor Color_PathWaynet;
    
    UPROPERTY(EditAnywhere)
    bool bVisualizeIssues;
    
    UPROPERTY(EditAnywhere)
    float Height_Issues;
    
public:
    AGlobalNavigationData(const FObjectInitializer& ObjectInitializer);

};

