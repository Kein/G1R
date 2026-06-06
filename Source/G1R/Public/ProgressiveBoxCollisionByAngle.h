#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EHitColliderState.h"
#include "HitCollisionDataContainer.h"
#include "HitCollisionInterface.h"
#include "ProgressiveBoxCollisionDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ProgressiveBoxCollisionByAngle.generated.h"

class AActor;
class UWeaponDefinition;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UProgressiveBoxCollisionByAngle : public UBoxComponent, public IHitCollisionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BoxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_YBoxRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ZBoxRadius;
    
    UPROPERTY(BlueprintAssignable)
    FProgressiveBoxCollisionDelegate OnActorDetected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponDefinition> m_WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector m_StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitCollisionDataContainer m_HitCollisionDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> m_CustomCollisionResponse;
    
public:
    UProgressiveBoxCollisionByAngle(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetZBoxRadius(float ZBoxRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetYBoxRadius(float YBoxRadius, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetBoxDepth(float BoxDepth, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void MoveForwardOverCone(float AccumulatedDistance, float Angle, float MinFloorHeight, float MaxFloorHeight, TEnumAsByte<ECollisionChannel> Channel, bool EvaluateWaterSurface);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetState(EHitColliderState State);
    
    UFUNCTION(BlueprintCallable)
    EHitColliderState K2_GetState();
    
    UFUNCTION(BlueprintCallable)
    void K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable)
    void K2_DoDestroyExplicit();
    
    UFUNCTION(BlueprintCallable)
    void K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse);
    
    UFUNCTION(BlueprintCallable)
    bool GetFloorLocation(FVector& OutPosition, FVector CurrentPosition, float MinFloorHeight, float MaxFloorHeight, TEnumAsByte<ECollisionChannel> Channel, bool EvaluateWaterSurface);
    
    UFUNCTION(BlueprintCallable)
    float GetConeRadius(float Angle, float Length);
    

    // Fix for true pure virtual functions not being implemented
};

