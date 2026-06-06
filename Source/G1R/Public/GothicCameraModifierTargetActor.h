#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "CameraEase.h"
#include "GothicCameraModifier.h"
#include "GothicCameraModifierTargetActor.generated.h"

class AActor;
class USceneComponent;

UCLASS()
class G1R_API UGothicCameraModifierTargetActor : public UGothicCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AActor* m_LastTarget;
    
    UPROPERTY(Transient)
    FRotator m_OriginalCharRotation;
    
    UPROPERTY(Transient)
    FRotator m_OriginalCamRotation;
    
    UPROPERTY(Transient)
    FRotator m_LastCamRotation;
    
    UPROPERTY(Transient)
    FVector m_TargetLocation;
    
    UPROPERTY(Transient)
    FVector m_PlayerLocation;
    
    UPROPERTY(Transient)
    AActor* m_CurrentTarget;
    
    UPROPERTY(Instanced, Transient)
    USceneComponent* m_CurrentTargetComponent;
    
    UPROPERTY(Transient)
    FCameraEase m_EaseTarget;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_SkipInState;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer m_TargetCombatState;
    
    UPROPERTY(Transient)
    FRotator m_LastFrameRotation;
    
    UGothicCameraModifierTargetActor();

};

