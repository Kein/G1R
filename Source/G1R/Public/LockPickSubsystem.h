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
    UPROPERTY(Transient, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AGothicLockSceneActor* m_LockSceneActor;
    
    UPROPERTY(Transient, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    AGothicLockPickActor* m_PendingLockPickActor;
    
    UPROPERTY(Transient, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TArray<AGothicLockPieceActor*> m_PendingLockPieces;
    
    UPROPERTY(Instanced, Transient)
    UGothicLockCameraHelperComponent* m_PendingCameraHelper;
    
    UPROPERTY(Transient, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TSet<FName> m_UnlockedActors;
    
private:
    UPROPERTY(Instanced, Transient, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    TMap<FName, UGothicLockConfig*> m_InstancedLocks;
    
public:
    ULockPickSubsystem();

};

