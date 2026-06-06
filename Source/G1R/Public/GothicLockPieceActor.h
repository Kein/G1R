#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "EGothicLockPieceType.h"
#include "GothicLockPieceActor.generated.h"

class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Abstract)
class AGothicLockPieceActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EGothicLockPieceType m_LockPieceType;
    
    UPROPERTY(EditAnywhere)
    int32 m_PieceId;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_CanEverBeHighlighted;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_CanEverShake;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* m_MaterialInstanceDynamic;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* m_RuntimeRootComponent;
    
public:
    AGothicLockPieceActor(const FObjectInitializer& ObjectInitializer);

};

