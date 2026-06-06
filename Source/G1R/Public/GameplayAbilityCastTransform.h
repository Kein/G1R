#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityCastSpell.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilityCastTransform.generated.h"

class ACharacterCanTransformInto;
class UAnimMontage;
class UScrollComponent;
class USpawnCharacterCanTransformIntoDefinition;

UCLASS()
class G1R_API UGameplayAbilityCastTransform : public UGameplayAbilityCastSpell {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_SpawnCreatureDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USpawnCharacterCanTransformIntoDefinition> m_SpawnDefinition;
    
private:
    UPROPERTY(Instanced)
    UScrollComponent* m_ScrollComponent;
    
    UPROPERTY()
    ACharacterCanTransformInto* m_Creature;
    
public:
    UGameplayAbilityCastTransform();

    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimationSyncWithMulticast(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimationSyncWith(UAnimMontage* followerAnimMontage, const UAnimMontage* targetAnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimationMulticast(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    void PlayScrollAnimation(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintPure)
    UScrollComponent* GetScrollComponent() const;
    
};

