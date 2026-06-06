#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerVolume.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "GothicTriggerVolume.generated.h"

class AActor;
class AGothicCharacter;
class UGothicTriggerVolumeDefinition;
class UMusicManager;
class UObject;
class UWeaponDefinition;

UCLASS()
class G1R_API AGothicTriggerVolume : public ATriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGothicTriggerVolumeDefinition> m_VolumeDefinition;
    
private:
    UPROPERTY()
    UMusicManager* m_Subsystem;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_MustTick;
    
    UPROPERTY()
    bool m_IsInside;
    
    UPROPERTY()
    AGothicCharacter* m_Player;
    
    UPROPERTY()
    TArray<TWeakObjectPtr<AGothicCharacter>> m_Characters;
    
    AGothicTriggerVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DamageAndEvent(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveData(const FString& DataName, float Value) const;
    
    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_DamageAndEvent(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IsDoorOpen(const UObject* WorldContextObject, const FName DoorName);
    
    UFUNCTION(BlueprintPure)
    float GetDataGlobalData(const FString& DataName) const;
    
    UFUNCTION(BlueprintPure)
    float GetData(const FString& DataName) const;
    
    UFUNCTION(BlueprintCallable)
    void DamageAndEvent(AGothicCharacter* Character, TSubclassOf<UWeaponDefinition> Weapon, FGameplayTag verb, FName instigatorName, FName EventName, float NewValue);
    
    UFUNCTION(BlueprintPure)
    bool BP_IsPlayer(AGothicCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool BP_HasCharacter(FName UniqueName) const;
    
};

