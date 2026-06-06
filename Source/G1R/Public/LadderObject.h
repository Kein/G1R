#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELadderDrawDebug.h"
#include "InteractiveObjectActor.h"
#include "LadderObject.generated.h"

class ACharacter;
class UCustomNavCollisionStaticMeshComponent;
class UGothicSmartLinkComponentFly;
class UGothicSmartLinkComponentInteractionSpot;
class UInstancedStaticMeshComponent;
class UInteractiveObjectAnchorComponent;

UCLASS()
class G1R_API ALadderObject : public AInteractiveObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float m_LadderStepSeparation;
    
    UPROPERTY(VisibleAnywhere)
    float m_LadderStepHeight;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_LadderStepCount;
    
    UPROPERTY(VisibleAnywhere)
    int32 m_MinStepCount;
    
    UPROPERTY(EditAnywhere)
    FVector m_LadderInteractOffsetBottom;
    
    UPROPERTY(EditAnywhere)
    FVector m_LadderInteractOffsetTop;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCustomNavCollisionStaticMeshComponent* m_NavSupportSurfaceTop;
    
    UPROPERTY()
    TArray<ACharacter*> m_Users;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UInteractiveObjectAnchorComponent* m_LadderBottomPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UInteractiveObjectAnchorComponent* m_LadderTopPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UInstancedStaticMeshComponent* m_LadderMesh;
    
    UPROPERTY(EditAnywhere, Transient)
    bool m_DrawAlways;
    
    UPROPERTY(EditAnywhere, Transient)
    ELadderDrawDebug m_LadderDrawDebug;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGothicSmartLinkComponentInteractionSpot* m_NavLinkLadder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGothicSmartLinkComponentFly* m_NavLinkFlying;
    
public:
    ALadderObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void BuildLadder();
    
};

