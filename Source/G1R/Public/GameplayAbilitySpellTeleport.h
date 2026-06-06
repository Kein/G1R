#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpellBasic.h"
#include "GameplayAbilitySpellTeleport.generated.h"

class AActor;
class AGothicCharacter;
class ATeleportAppearingActor;

UCLASS()
class G1R_API UGameplayAbilitySpellTeleport : public UGameplayAbilitySpellBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ATeleportAppearingActor> m_TeleportAppearingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxTraceDistanceToFindGround;
    
private:
    UPROPERTY()
    AActor* m_TeleportLocationActor;
    
    UPROPERTY(ReplicatedUsing=OnRep_TeleportAppearingActor)
    ATeleportAppearingActor* m_TeleportAppearingActor;
    
    UPROPERTY(Replicated)
    TArray<AGothicCharacter*> m_CharactersAroundTeleportOrigin;
    
    UPROPERTY(Replicated)
    float m_AppearingTime;
    
public:
    UGameplayAbilitySpellTeleport();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void StartTeleportServer(AActor* teleportLocationActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTeleportFinished_Scriptable();
    
private:
    UFUNCTION()
    void OnRep_TeleportAppearingActor() const;
    
    UFUNCTION()
    void OnFinishStreamingServer();
    
    UFUNCTION(NetMulticast, Reliable)
    void MulticastFinishTeleportAppearingActor();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    float GetVanishingTime_Scriptable(const AGothicCharacter* Owner) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetAppearingTime_Scriptable(const AGothicCharacter* Owner) const;
    
};

