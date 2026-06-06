#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "GateShadowAnimNode.generated.h"

class UFggto;

USTRUCT(BlueprintType)
struct GATESHADOW_API FGateShadowAnimNode : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFggto* Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ReloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, int32> CustomBonesRemapping;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD0;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD1;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD2;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD3;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD4;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD5;
    
    UPROPERTY(EditAnywhere)
    double CurveValueFilter_LOD6;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD0;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD1;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD2;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD3;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD4;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD5;
    
    UPROPERTY(EditAnywhere)
    bool bDisabledByLOD_LOD6;
    
    FGateShadowAnimNode();
};

