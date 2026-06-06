#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EHitColliderState.h"
#include "HitCollisionDataContainer.h"
#include "HitCollisionInterface.h"
#include "Templates/SubclassOf.h"
#include "HitBoxCollisionComponent.generated.h"

class AActor;
class UWeaponDefinition;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UHitBoxCollisionComponent : public UBoxComponent, public IHitCollisionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UWeaponDefinition> m_WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHitCollisionDataContainer m_HitCollisionDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> m_CustomCollisionResponse;
    
public:
    UHitBoxCollisionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void K2_SetState(EHitColliderState State);
    
    UFUNCTION(BlueprintPure)
    EHitColliderState K2_GetState();
    
    UFUNCTION(BlueprintCallable)
    void K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable)
    void K2_DoDestroyExplicit();
    
    UFUNCTION(BlueprintCallable)
    void K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse);
    

    // Fix for true pure virtual functions not being implemented
};

