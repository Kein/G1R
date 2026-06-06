#pragma once
#include "CoreMinimal.h"
#include "EPathResultReason.generated.h"

UENUM(BlueprintType)
enum class EPathResultReason : uint8 {
    None,
    UnreliableWaynet,
    RequestStarted,
    AlreadyAtGoal,
    F_Waynet_Islands,
    F_Waynet_StartNodeNotFound,
    F_Waynet_EndNodeNotFound,
    F_Waynet_PathingFailed,
    F_Waynet_CostLimitReached,
    F_Waynet_LengthLimitReached,
    F_Waynet_WaynetNotPresent,
    F_NavMesh_PathingFailed,
    F_NavMesh_ProjectionFailedStart,
    F_NavMesh_ProjectionFailedGoal,
    F_NavMesh_SearchLimitReached,
    F_NavLink_TryPrepareParkourAction,
    F_NavLink_TraverseAbilityNotStarted,
    S_NavLink_Traverse,
    F_Follow_Blocked,
    F_Follow_RequestFailed,
    F_Follow_OffPath,
    F_Follow_RequestInvalid,
    F_Follow_AbortMove,
};

