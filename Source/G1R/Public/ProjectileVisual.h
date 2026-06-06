#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "AbilitySystemInterface.h"
#include "AimingAssistance.h"
#include "ItemVisual.h"
#include "ProjectileCollideSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "ProjectileVisual.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGothicFXComponent;
class UHitSphereCollisionComponent;
class UPerceptionComponent;
class UPrimitiveComponent;
class UProjectileDefinition;
class UProjectileMovementComponent;
class UWeaponDefinition;

UCLASS(Abstract)
class G1R_API AProjectileVisual : public AItemVisual, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FProjectileCollideSignature OnCollide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAimingAssistance m_AimingAssistanceData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector m_SpawnDirection;
    
    UPROPERTY(Instanced)
    UGothicFXComponent* m_FXComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UProjectileDefinition* m_ProjectileDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UHitSphereCollisionComponent* m_CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UProjectileMovementComponent* m_MovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPerceptionComponent* m_PerceptionComponent;
    
private:
    UPROPERTY()
    AActor* m_LastTarget;
    
protected:
    UPROPERTY()
    FName m_ProjectileProfileName;
    
public:
    AProjectileVisual(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnObject(TSubclassOf<AActor> Actor, FVector position, FRotator Rotation);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVelocity(const FVector& Velocity);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileEndPlay();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileCollide_Script();
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileCollide(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileBeginPlay();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOverlapEndsServer(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHitServer_Scriptable(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnHitServer(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(const FVector& Target, float Speed, float Gravity, AActor* TargetActor, bool hasDirectTrace, bool IsTargetVisible);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IncrementHitCounter() const;
    
public:
    UFUNCTION(BlueprintPure)
    TSubclassOf<UWeaponDefinition> GetWeaponDefinition() const;
    
    UFUNCTION(BlueprintPure)
    UGothicFXComponent* GetFXComponent() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceDestroy_Scriptable();
    

    // Fix for true pure virtual functions not being implemented
};

