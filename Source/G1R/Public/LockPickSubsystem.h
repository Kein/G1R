#pragma once
#include "CoreMinimal.h"
#include "BaseClasses/ScriptWorldSubsystem.h"
#include "LockPickSubsystem.generated.h"

class AGothicLockPickActor;
class AGothicLockPieceActor;
class AGothicLockSceneActor;
class UGothicLockCameraHelperComponent;
class UGothicLockConfig;

UCLASS()
class G1R_API ULockPickSubsystem : public UScriptWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AGothicLockSceneActor* m_LockSceneActor;
    
    UPROPERTY(Transient)
    AGothicLockPickActor* m_PendingLockPickActor;
    
    UPROPERTY(Transient)
    TArray<AGothicLockPieceActor*> m_PendingLockPieces;
    
    UPROPERTY(Instanced, Transient)
    UGothicLockCameraHelperComponent* m_PendingCameraHelper;
    
    UPROPERTY(Transient)
    TSet<FName> m_UnlockedActors;
    
private:
    UPROPERTY(Instanced, Transient)
    TMap<FName, UGothicLockConfig*> m_InstancedLocks;
    
public:
    ULockPickSubsystem();

};

