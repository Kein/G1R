#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraBehaviour.h"
#include "ECamConditions.h"
#include "Templates/SubclassOf.h"
#include "GothicCameraManager.generated.h"

class ACharacter;
class UAbilitySystemComponent;
class UCameraDefinition;
class UGothicCameraModifier;
class UScriptGameplayAbility;

UCLASS(NonTransient)
class G1R_API AGothicCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UCameraDefinition* m_CameraConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LineOfSightProbeSize;
    
private:
    UPROPERTY(Transient)
    float m_TimeSinceLastEnemyCheck;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EnemyCheckInterval;
    
    UPROPERTY(Transient)
    int32 m_EnemiesGroundAround;
    
    UPROPERTY(Transient)
    int32 m_EnemiesFlyAround;
    
    UPROPERTY(Transient)
    bool m_TargetIsBig;
    
    UPROPERTY(Transient)
    ACharacter* m_Character;
    
    UPROPERTY(Transient)
    TArray<UGothicCameraModifier*> m_UsedModifierList;
    
    UPROPERTY(Transient)
    TSubclassOf<UScriptGameplayAbility> m_Spell;
    
    UPROPERTY(Transient)
    FCameraBehaviour m_SpellCameraBehaviour;
    
    UPROPERTY(Transient)
    FCameraBehaviour m_CinematicCameraBehaviour;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(EditAnywhere, Transient)
    ECamConditions m_CurrentBehaviour;
    
public:
    UPROPERTY(EditAnywhere)
    float m_ViewPitchMinCache;
    
    UPROPERTY(EditAnywhere)
    float m_ViewPitchMaxCache;
    
    AGothicCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshCameraConfig();
    
};

