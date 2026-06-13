#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "InteractiveObjectActor.h"
#include "ItemPayload.h"
#include "OnProjectileStopDelegate.h"
#include "ReplicatedWorldData.h"
#include "SaveWorldActorInterface.h"
#include "Templates/SubclassOf.h"
#include "ItemVisualWorld.generated.h"

class AActor;
class UArrowComponent;
class UBoxComponent;
class UBuoyantForceComponent;
class UGothicFXComponent;
class UItemDefinition;
class UPerceptionComponent;
class UPrimitiveComponent;
class UProjectileMovementComponent;
class URotatingMovementComponent;

UCLASS()
class G1R_API AItemVisualWorld : public AInteractiveObjectActor, public ISaveWorldActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_SetupCollisions;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UGothicFXComponent* m_FXComponent;
    
    UPROPERTY(EditAnywhere, Instanced)
    UPerceptionComponent* m_PerceptionComponent;
    
    UPROPERTY(BlueprintAssignable)
    FOnProjectileStop OnProjectileStopDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    int32 m_ItemCount;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_WorldItemDefinition)
    FReplicatedWorldData m_ReplicatedWorldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> m_WorldItemDefinition;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UArrowComponent* m_FloatingMovingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FItemPayload m_Payload;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UBoxComponent* m_CollisionComp;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UProjectileMovementComponent* m_BallisticUnrealComp;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    URotatingMovementComponent* m_RotatingUnrealComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MinTumbleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxTumbleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBuoyantForceComponent* m_BuoyancyForceComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_Switch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsNpc;
    
    AItemVisualWorld(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupCollisions() const;
    
    UFUNCTION(BlueprintCallable)
    void SetDrop(float Rotate, bool useImpulse, const FVector& Impulse);
    
    UFUNCTION(BlueprintCallable)
    void PutToSleep();
    
protected:
    UFUNCTION()
    void OnRep_WorldItemDefinition();
    
    UFUNCTION()
    void OnPutToSleepCallBack(UPrimitiveComponent* InComp, FName InBoneName);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION()
    void HandleCollisionAfterDrop(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintPure)
    UItemDefinition* GetItemDefinition() const;
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnOverlapWith(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

