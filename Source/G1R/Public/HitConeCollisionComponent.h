#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "EHitColliderState.h"
#include "HitCollisionDataContainer.h"
#include "HitCollisionInterface.h"
#include "Templates/SubclassOf.h"
#include "HitConeCollisionComponent.generated.h"

class AActor;
class UWeaponDefinition;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UHitConeCollisionComponent : public USphereComponent, public IHitCollisionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponDefinition> m_WeaponData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float m_HalfAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float m_ConeLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float m_LineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitCollisionDataContainer m_HitCollisionDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> m_CustomCollisionResponse;
    
public:
    UHitConeCollisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHalfAngle(float InAngle, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void SetConeLength(float ConeLength, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetState(EHitColliderState State);
    
    UFUNCTION(BlueprintCallable)
    EHitColliderState K2_GetState();
    
    UFUNCTION(BlueprintCallable)
    void K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_DoDestroyExplicit();
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse);
    
    UFUNCTION(BlueprintCallable)
    float GetConeLength();
    

    // Fix for true pure virtual functions not being implemented
};

