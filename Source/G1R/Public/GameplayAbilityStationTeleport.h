#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityStationTeleport.generated.h"

class AActor;
class AGothicCharacter;
class AInteractiveObjectActor;
class ATeleportAppearingActor;
class UAbilityTask_PlayMontage_Extended;
class UAbilityTask_WaitGameplayEvent;
class UCameraFadeManager;
class UTeleportCompositeExtraData;
class UTeleportExtraData;

UCLASS()
class G1R_API UGameplayAbilityStationTeleport : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> m_SpawnTeleportPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxTraceDistanceToFindGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ATeleportAppearingActor> m_TeleportAppearingClass;
    
protected:
    UPROPERTY(Replicated)
    float m_RandSeed;
    
    UPROPERTY(Transient)
    FGameplayTag m_EventTag;
    
    UPROPERTY(Replicated)
    TArray<AGothicCharacter*> m_CharactersAroundTeleportOrigin;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_CharMontageTask_Teleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_TeleportMapFreepointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTeleportExtraData* m_TeleportExtraData;
    
    UPROPERTY()
    AActor* m_TeleportLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AppearingDuration;
    
    UPROPERTY(ReplicatedUsing=OnRep_TeleportAppearingActor)
    ATeleportAppearingActor* m_TeleportAppearingActor;
    
    UPROPERTY(Replicated)
    float m_AppearingTime;
    
    UPROPERTY()
    AInteractiveObjectActor* m_InteractiveObjectActor;
    
    UPROPERTY()
    UTeleportCompositeExtraData* m_TeleportData;
    
    UPROPERTY()
    UCameraFadeManager* m_CameraFade;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_TeleportAnimNotify;
    
    UPROPERTY()
    UAbilityTask_WaitGameplayEvent* m_TeleportCameraNotify;
    
    UPROPERTY()
    FGameplayTagContainer m_TagsToAdd;
    
    UPROPERTY()
    FGameplayTagContainer m_TagsToRemove;
    
public:
    UGameplayAbilityStationTeleport();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void PreFadeOutEnd();
    
    UFUNCTION()
    void PreFadeInEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnStartTeleport(FGameplayEventData Payload);
    
protected:
    UFUNCTION()
    void OnRep_TeleportAppearingActor() const;
    
    UFUNCTION()
    void OnFinishStreamingServer();
    
    UFUNCTION()
    void OnFadeOutFinished();
    
    UFUNCTION()
    void OnFadeInFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEndCamera(FGameplayEventData Payload);
    
protected:
    UFUNCTION()
    void OnAppearingFinished();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastFinishTeleportAppearingActor();
    
    UFUNCTION(BlueprintNativeEvent)
    FName GetMontageNameTeleport_Scriptable(FName& originalName);
    
};

