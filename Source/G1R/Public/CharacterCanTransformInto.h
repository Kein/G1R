#pragma once
#include "CoreMinimal.h"
#include "DataModuleOwner.h"
#include "GothicCharacter.h"
#include "MPSyncCommonInfo.h"
#include "CharacterCanTransformInto.generated.h"

class AController;
class APawn;
class UAnimMontage;
class UDataModuleComponent;
class USpawnCharacterCanTransformIntoDefinition;

UCLASS()
class G1R_API ACharacterCanTransformInto : public AGothicCharacter, public IMPSyncCommonInfo, public IDataModuleOwner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Replicated)
    TWeakObjectPtr<USpawnCharacterCanTransformIntoDefinition> m_SpawnDefinition;
    
    UPROPERTY(Instanced)
    UDataModuleComponent* m_DataModuleComponent;
    
    UPROPERTY()
    UAnimMontage* m_AnimMontage;
    
    UPROPERTY()
    AGothicCharacter* m_FromCharacter;
    
    UPROPERTY()
    AGothicCharacter* m_ToCharacter;
    
    UPROPERTY()
    UAnimMontage* m_Montage;
    
public:
    ACharacterCanTransformInto(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TransformFrom(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration, UAnimMontage* Montage);
    
private:
    UFUNCTION()
    void OnUntransformMontageBlendInEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnTransformMontageBlendInEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION()
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastTransformationVisuals(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, UAnimMontage* Montage);
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastStartCameraTravelBeforePossess(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration);
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void MulticastSaveTransformData(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration, UAnimMontage* Montage);
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastEnterUntransformingState();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_BeforeDestruction();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool IsDataReady() const override PURE_VIRTUAL(IsDataReady, return false;);
    
};

