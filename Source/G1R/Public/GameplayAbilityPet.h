#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityBlockingInteraction.h"
#include "GameplayAbilityPet.generated.h"

class UAbilityTask_AlignCharacterAtLocation;
class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAbilityPet : public UGameplayAbilityBlockingInteraction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UAbilityTask_AlignCharacterAtLocation> m_AlignTask;
    
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_ScavengerSTL_HeroN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_ScavengerSTL_HeroSTL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_ScavengerN_HeroN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_ScavengerN_HeroSTL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_WolfSTL_HeroN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_WolfSTL_HeroSTL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_WolfN_HeroN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimMontage> m_PetMontage_WolfN_HeroSTL;
    
public:
    UGameplayAbilityPet();

protected:
    UFUNCTION()
    void OnPetMontageEnded();
    
};

