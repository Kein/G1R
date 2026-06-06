#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityCallMount.generated.h"

class AGothicCharacter;
class AGothicNPCState;
class UAIState_DailyRoutine;
class UAnimMontage;
class UDataModule_Animation;
class UNavigationQueryFilter;
class USpawnAIAgentDefinition;

UCLASS()
class G1R_API UGameplayAbilityCallMount : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<USpawnAIAgentDefinition> m_MountClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> m_MountNavigationAreaFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_WhistleAnimMontage_LeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_WhistleAnimMontage_CrouchLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_WhistleAnimMontage_RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_WhistleAnimMontage_CrouchRightHand;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UAIState_DailyRoutine> m_FollowDailyRoutine;
    
    UPROPERTY()
    TWeakObjectPtr<UDataModule_Animation> m_DataModule_Animation;
    
    UPROPERTY(EditAnywhere)
    float m_SpawningRadius;
    
public:
    UGameplayAbilityCallMount();

protected:
    UFUNCTION()
    AGothicNPCState* SpawnNewMount() const;
    
    UFUNCTION()
    void OnMountSpawned(AGothicNPCState* NPCState, AGothicCharacter* Character);
    
};

